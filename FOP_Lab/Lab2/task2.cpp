#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;

    // Prompt user for input
    cout << "Enter x and y coordinates of the first point: ";
    cin >> x1 >> y1;
    cout << "Enter x and y coordinates of the second point: ";
    cin >> x2 >> y2;

    // Calculate distance between points
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx*dx + dy*dy);

    // Output distance
    cout << "The distance between the two points is " << (int) distance << "\n";

    return 0;
}
