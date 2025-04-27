#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int mat[m][n], trans[n][m];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            trans[i][j] = mat[j][i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << trans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
