#include <iostream>
#include <iomanip>
using namespace std;
class Sensor{
    public:
    static int totalSensors;
    int id;
    Sensor(int i){
        id = i;
        totalSensors++;
    }
    void display(){
        cout<<"Sensor ID: "<<id<<endl;
        cout<<"Total Sensors: "<<totalSensors<<endl;
    }
};
int Sensor::totalSensors = 0;
int main() {
    Sensor s1(1);
    Sensor s2(2);
    Sensor s3(3);
    Sensor s4(4);
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}