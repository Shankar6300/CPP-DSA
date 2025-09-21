#include<iostream>
using namespace std;
class Book{
    public:
     
    string title;
    int price;
    Book(string t,int p){
        title=t;
        price=p;
        cout<<"copy constructor called"<<endl;
    }
    Book(const Book &b){
        title=b.title;
        price=b.price;
        
    }
    void display(){
        cout<<"Title: "<<title<<" Price: "<<price<<endl;
    }

};
int main(){
    Book b1("c++",500);
    Book b2=b1;

    cout<<"original: \n";
    b1.display();
    cout<<"copied: \n";
    b2.display();
    return 0;

}