#include <iostream>
using namespace std;
void printType(int a) { cout << " data type is: int" << endl; }
void printType(double a) { cout << " data type is: double" << endl; }
void printType(string s) { cout << " data type is: string" << endl; }
int main() {

 printType(10);
 printType(10.5);
 printType("Hello");
 return 0;
 
}