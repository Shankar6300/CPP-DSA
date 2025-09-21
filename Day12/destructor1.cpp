#include<iostream>
using namespace std;
class car{
    public:

    string name;
    car(string s){
        name=s;
        cout<<"constructor "<<name<<" created"<<endl;
    }
    ~car(){
        cout<<"destructor "<<name<<" destroyed"<<endl;
    }

};
int main(){
    car c1("BMW");
    car c2("Audi");
    car c3("Mercedes");
    return 0;
}