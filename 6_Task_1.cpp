#include <iostream>
#include <iomanip>
using namespace std;

class circle {
public:
    double radius;
    double area();
    double circumference();
};

double circle::area() {
    return 3.14 * radius * radius;
}

double circle::circumference() {
    return 2 * 3.14 * radius;
}

int main() {
    circle c1;
    c1.radius = 5.0;
    cout << "Area: " << fixed << setprecision(2) << c1.area() << endl;
    cout << "Circumference: " << c1.circumference() << endl;
    return 0;
}