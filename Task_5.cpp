#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    auto compute = [x, y]() {
        cout << "x = " << x << ", y = " << y << endl;
        cout << "Sum:  " << x + y << endl;
        cout << "Product: " << x * y << endl;
    };
    compute();

    return 0;
}