#include<iostream>
using namespace std;
class Book{
    private:
    string name;
    int price;
    public:
    Book(string n, int p){
        name=n;
        price=p;
    }
    friend ostream& operator<<(ostream& out, Book& b);
};

    ostream& operator<<(ostream& out, Book& b){
        out<<"Title: "<<b.name<<"Price: "<<b.price<<endl;
    }
    
int main(){
    Book b1("c++ progamming", 500);
    Book b2("Python",600);
    cout<<b1<<endl;
    cout<<b2<<endl;
    
}



