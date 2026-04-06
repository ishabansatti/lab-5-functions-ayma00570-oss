#include <iostream>
#include <iomanip>
#include <string>
#include<cmath>
using namespace std;
class Box { 
public: 
    double l, w, h; 
 
    
    Box(double a, double b, double c) : l(a), w(b), h(c) {} // full 
    
    double volume() { return l * w * h; } 
    void   display() { cout << l << " " << w << " " << h << endl; } 
     
}; 
void largeBox(Box a, Box b) {
        if(a.volume() > b.volume()){
            cout<<"dimensions of larger box a are: ";
            a.display();
        }
        else if(a.volume() < b.volume()){
            cout<<"dimensions of larger box b are: ";
            b.display();
        }
        else{
            cout<<"box a and box b are equal in volume"<<endl;
        }
    }
int main() { 
    Box a(3.00,4.00,6.00);
    Box b(4.00,2.00,6.00);
    largeBox(a, b);
    return 0; 
}