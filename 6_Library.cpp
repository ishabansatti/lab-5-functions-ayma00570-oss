#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct PublisherInfo{
    string name;
    int year;
};
class Book{
    private:
    string title;
    string author;
    double price;
    PublisherInfo publisher;
    bool available;
    static int totalBooks;
    public:
    Book() : title("Unknown"), author("Unknown"), price(0.0), publisher({"Unknown", 0}), available(false) {
        totalBooks++;
    }
    Book(string t, string a, double p) : title(t), author(a), price(p), publisher({"Unknown", 0}), available(true) {
        totalBooks++;
    }
    Book(string t, string a, double p, PublisherInfo pub) : title(t), author(a), price(p), publisher(pub), available(true) {
        totalBooks++;
    }
    void setPrice(double p){
        if(p <= 0){
            cout<<"Error: Price cannot be negative or zero!"<<endl;
            return;
        } else{
            price = p;
        }
    }
    double getPrice() const{
        return price;
    }
    string getTitle() const{
        return title;
    }
    string getAuthor() const{
        return author;
    }
    bool isAvailable() const{
        return available;
    }
    void checkout(){
        if(available){
            available = false;
            cout<<"You have checked out: "<<title<<endl;
        } else{
            cout<<"Sorry, "<<title<<" is currently unavailable."<<endl;
        }
    }
    void returnBook(){
        if(!available){
            available = true;
            cout<<"You have returned: "<<title<<endl;
        } else{
            cout<<"Error: "<<title<<" was not checked out."<<endl;
        }
    }
    void static displayTotalBooks(){
        cout<<"Total Books Created: "<<totalBooks<<endl;
    }
     static void Bookcheapest(Book a, Book b){
        if(a.price < b.price){
            cout<<"The cheaper book is: "<<a.title<<" by "<<a.author<<" priced at Rs."<<a.price<<endl;
        }
        else if(a.price > b.price){
            cout<<"The cheaper book is: "<<b.title<<" by "<<b.author<<" priced at Rs."<<b.price<<endl;
        }
        else{
            cout<<"Both books are priced the same at Rs."<<a.price<<endl;
        }
    }

   void print(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: Rs."<<price<<endl;
        cout<<"Publisher Name: "<<publisher.name<<endl;
        cout<<"Publication Year: "<<publisher.year<<endl;
    }
};
int Book::totalBooks = 0;
int main() {
    PublisherInfo pub1 = {"zimal", 2012};
    Book b1("Jannat ke pattay", "Nemrah Ahmed", 499.00, pub1);
    PublisherInfo pub2 = {"Umera Ahmed", 2008};
    Book b2("Peer e kamil", "Unknown Author", 399.00, pub2);
    Book b3("Unknown Book", "Unknown Author", 0.00);
    b1.print();
    cout<<endl;
    b2.print();
    cout<<endl;
    b3.print();
    cout<<endl;
   b1.Bookcheapest(b1,b2);
    cout<<endl;
    Book::displayTotalBooks();
    return 0;
}