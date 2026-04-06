#include <iostream>
#include <iomanip>
using namespace std;
int generateID(){
    static int a = 1001; 
    cout<<"Id:"<<a<<endl;
    a++;
 }
 int main() {
    generateID();
    generateID();
    generateID();
    generateID();
    generateID();
    return 0;
}