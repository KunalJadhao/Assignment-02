#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}
    Counter& operator++() {
        ++count;
        return *this;
    }
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter counter(5);

    ++counter;
    counter.display();

    return 0;
}
