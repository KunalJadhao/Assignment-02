#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols]();
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    void input() {
        cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator*(const Matrix& other) {
        if (cols != other.rows) {
            throw "Matrix dimensions do not match for multiplication!";
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    try {
        int r1, c1, r2, c2;
        cout << "Enter number of rows and columns for Matrix 1: ";
        cin >> r1 >> c1;
        Matrix m1(r1, c1);
        m1.input();
        cout << "Enter number of rows and columns for Matrix 2: ";
        cin >> r2 >> c2;
        Matrix m2(r2, c2);
        m2.input();
        Matrix m3 = m1 * m2;

        cout << "Matrix 1:\n";
        m1.display();

        cout << "Matrix 2:\n";
        m2.display();

        cout << "Result of Matrix Multiplication (Matrix 1 * Matrix 2):\n";
        m3.display();
    }
    catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}
