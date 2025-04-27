#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (sqrt(n) == int(sqrt(n))) cout << "Perfect square";
    else cout << "Not a perfect square";
    return 0;
}
