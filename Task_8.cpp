#include <iostream>
#include <iomanip>
using namespace std;
int accumulate(int value){
    static int total =0;
    total +=value;
    cout<<"static total equals "<<total<<endl;
}
int main() {
    accumulate(10);
    accumulate(25);
    accumulate(5);
    return 0;
}