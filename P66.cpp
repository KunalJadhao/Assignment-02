#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point operator-(const Point& other) {
        return Point(x - other.x, y - other.y);
    }
    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Point p1(10, 5);
    Point p2(4, 3);
    Point p3 = p1 - p2;

    cout << "p1 = ";
    p1.display();
    cout << endl;

    cout << "p2 = ";
    p2.display();
    cout << endl;

    cout << "p1 - p2 = ";
    p3.display();
    cout << endl;

    return 0;
}
