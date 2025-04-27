#include <iostream>
using namespace std;

// Creating a Book class
class Book {
public:
    string title;
    string author;
    double price;

    // Displaying book details
    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Creating an array of Book objects
    Book books[3];

    books[0].title = "To the Girl I saw that day";
    books[0].author = "Kunal J.";
    books[0].price = 160;

    books[1].title = "The way of life";
    books[1].author = "Kunal J.";
    books[1].price = 200;

    books[2].title = "A Game of thrones";
    books[2].author = "George R. R. Martin";
    books[2].price = 800;

    for (int i = 0; i < 3; i++) {
        cout << "\nBook " << i+1 << " details:\n";
        books[i].displayDetails();
    }

    return 0;
}
