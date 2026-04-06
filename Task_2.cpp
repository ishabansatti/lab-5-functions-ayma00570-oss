#include <iostream>
#include <iomanip>
using namespace std;
void swap(int &a,int &b){
     int temp;
     temp = a;
     a = b;
     b = temp;
 }
 int main() {
 int  x = 4 ;
    int y = 7;
    cout<<"before swap:"<<endl;
    cout<<"x equals "<<x<<endl;
    cout<<"y equals "<<y<<endl;
    cout<<"after swap :"<<endl;
    swap(x,y);
    cout<<"x equals "<<x<<endl;
    cout<<"y equals "<<y<<endl;
    return 0;
}