#include <iostream>
#include <iomanip>
using namespace std;
class rectangle{
    public:
    double length;
    double width;
};
void compare(rectangle r1,rectangle r2){
    double area1 = r1.length * r1.width;
    double area2 = r2.length * r2.width;
    if(area1 > area2){
        cout<<"area of rectangle 1 is greater than area of rectangle 2"<<endl;
    }
    else if(area1 < area2){
        cout<<"area of rectangle 2 is greater than area of rectangle 1"<<endl;
    }
    else{
        cout<<"area of rectangle 1 is equal to area of rectangle 2"<<endl;
    }
}
int main() {
    rectangle r1;
    r1.length = 5.0;
    r1.width = 3.0;
    rectangle r2;
    r2.length = 4.0;
    r2.width = 6.0;
    compare(r1,r2);
    return 0;
}
