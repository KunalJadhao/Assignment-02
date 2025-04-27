#include <iostream>
using namespace std;

int main() {
    string username, password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == "user" && password == "pass") {
        cout << "Login successful!";
    } else {
        cout << "Login failed!";
    }

    return 0;
}
