#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book() {}

    Book(string t, string a) : title(t), author(a) {}

    friend istream& operator>>(istream& in, Book& b) {
        cout << "Enter title: ";
        getline(in, b.title);
        cout << "Enter author: ";
        getline(in, b.author);
        return in;
    }
    friend ostream& operator<<(ostream& out, const Book& b) {
        out << "Title: " << b.title << "\nAuthor: " << b.author << endl;
        return out;
    }
};

int main() {
    Book book1;

    cin >> book1;
    cout << book1;

    return 0;
}
