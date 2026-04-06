#include <iostream>
#include <iomanip>
using namespace std;
struct Address{
    string city;
    string country;
    int postalCode;
};
class Hospital{
    public:
    string name;
    Address location;
    Hospital(string n,Address loc){
        name = n;
        location = loc;
    }
    void display(){
        cout<<"Hospital Name: "<<name<<endl;
        cout<<"City: "<<location.city<<endl;
        cout<<"Country: "<<location.country<<endl;
        cout<<"Postal Code: "<<location.postalCode<<endl;
    }
};
int main() {
    Address loc1 = {"Lahore","Pakistan",75500};
    Hospital h1("Services",loc1);
    h1.display();
    return 0;
}