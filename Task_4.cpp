#include <iostream>
#include <iomanip>
using namespace std;
bool isPrime(int n){

    for(int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
 }
 int main() {
    int n;
    cout<<"enter a number to check if it is prime or not"<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}