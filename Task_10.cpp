#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
double power(int base,int exponent){
    return pow(base,exponent);
}
int main() {
    cout<<"2 to the power of 8 is equal to "<<power(2,8)<<endl;
    cout<<"3 to the power of 4 is equal to "<<power(3,4)<<endl;
    return 0;
}