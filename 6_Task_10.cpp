#include <iostream>
#include <iomanip>
#include <string>
#include<cmath>
using namespace std;
class Temperature{
    private:
    double celsius;
    public:
    Temperature(double c){
        celsius = c;
    }
    void setCelsius(double c){
        if(c < -273.15){
            cout<<"Temperature cannot be below absolute zero!"<<endl;
            return;
        }else{
            celsius = c;
        }
        
    }
    double getCelsius() const{
        return celsius;
    }
    double toFahrenheit() const{
        return (celsius * 9.0 / 5.0) + 32.0;
    }
    double toKelvin() const{
        return celsius + 273.15;
    }
    void display(){
        cout<<"Temperature in Celsius: "<<celsius<<endl;
        cout<<"Temperature in Fahrenheit: "<<toFahrenheit()<<endl;
        cout<<"Temperature in Kelvin: "<<toKelvin()<<endl;
    }
};
int main() {
    Temperature temp(25.0);
    temp.display();
    temp.setCelsius(-300.0);
    temp.setCelsius(30.0);
    temp.display();
    return 0;
}