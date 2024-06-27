//Program to calculate distance between two points (Each point is represented in m, km) using OOP concept

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Point {
public:
    double x; // in meters
    double y; // in kilometers

    void setCoordinates(double xc, double yc) {
        x = xc;
        y = yc;
    }

    void convertToKm() {
        x /= 1000.0;
    }
};

double calculateDistance(Point p1, Point p2) {
    p1.convertToKm();
    p2.convertToKm();
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the coordinates of the first point (m, km): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second point (m, km): ";
    cin >> x2 >> y2;

    Point point1;
    Point point2;

    point1.setCoordinates(x1, y1);
    point2.setCoordinates(x2, y2);

    double distance = calculateDistance(point1, point2);

    cout << "The distance between the points is: " << distance << " km" << endl;

    return 0;
}
