#include <iostream>
#include <iomanip>
using namespace std;
int fibbonaci(int n){
    return n <= 1 ? n : fibbonaci(n-1) + fibbonaci(n-2);
}
int main() {
    cout << fibbonaci(1) << endl;
    cout << fibbonaci(2) << endl;
    cout << fibbonaci(3) << endl;
    cout << fibbonaci(4) << endl;
    cout << fibbonaci(5) << endl;
    cout << fibbonaci(6) << endl;
    cout << fibbonaci(7) << endl;
    cout << fibbonaci(8) << endl;
    cout << fibbonaci(9) << endl;
    cout << fibbonaci(10) << endl;
    
    return 0;
}