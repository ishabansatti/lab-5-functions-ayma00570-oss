#include <iostream>
#include <iomanip>
using namespace std;

class Book{
    public:
    string title;
    string author;
    double price;
   void print(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: Rs."<<price<<endl;
    }
};
    int main() {
   Book b1;
   b1.title = "Jannat Ke Pattay";
   b1.author = "Nemrah Ahmed";
   b1.price = 1299.00;
   Book b2;
   b2.title = "Maala";
    b2.author = "Nemrah Ahmed";
    b2.price = 1599.00;
    Book b3;
    b3.title = "Baab e dahar";
    b3.author = "Mehrunnisa";
    b3.price = 1899.00;
   b1.print();
   b2.print();
   b3.print();
   return 0;
}