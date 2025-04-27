#include <iostream>
using namespace std;

// Creating a Time class
class Time {
public:
    int hours;
    int minutes;

    // Adding two Time objects and printing the result
    void addTime(Time t1, Time t2) {
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;

        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }

        cout << "Sum of Times = " << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time time1, time2, result;

    time1.hours = 3;
    time1.minutes = 50;

    time2.hours = 4;
    time2.minutes = 25;

    result.addTime(time1, time2);

    return 0;
}
