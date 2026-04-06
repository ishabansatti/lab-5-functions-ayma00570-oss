#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    auto counter = [&](){
       static int  a = 3;
       a++;
    cout<<"a equals "<<a<<endl;
    
    
};
  
counter();
counter();
counter();
    return 0;
}