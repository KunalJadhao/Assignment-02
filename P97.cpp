#include <iostream>
#include <cmath>
using namespace std;

class PathPlanner {
public:
    double x1, y1, x2, y2;

    double computeShortestPath() {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};

int main() {
    PathPlanner planner;

    cout << "Enter coordinates of point 1 (x1, y1): ";
    cin >> planner.x1 >> planner.y1;

    cout << "Enter coordinates of point 2 (x2, y2): ";
    cin >> planner.x2 >> planner.y2;

    double shortestPath = planner.computeShortestPath();
    cout << "Shortest path: " << shortestPath << endl;

    return 0;
}
