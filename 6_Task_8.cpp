#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Mathconstants{
    private:
    const double PI = 3.14159;
    const double E = 2.71828;
    public:
    Mathconstants(double pi, double e) : PI(pi), E(e) {}
    double getPI() const { return PI; }
    double getE()  const { return E;  }
};

int main() {
    Mathconstants m1(3.14159,2.71828);
    cout<<"Value of PI: "<<m1.getPI()<<endl;
    cout<<"Value of E: "<<m1.getE()<<endl;
    return 0;
}
