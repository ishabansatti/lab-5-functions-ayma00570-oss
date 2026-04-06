#include <iostream>
#include <iomanip>
using namespace std;
int area(int side){
    return side*side;
}
int area(int length,int width){
    return length*width;
}
double area(double radius){
    return 3.14*radius*radius;
}
int main() {
    cout<<"area of square with side 5 is equal to "<<area(5)<<endl;
    cout<<"area of rectangle with length 4 and width 7 is equal to "<<area(4,7)<<endl;
    cout<<"area of circle with radius 3 is equal to "<<area(3.0)<<endl;
    return 0;
}