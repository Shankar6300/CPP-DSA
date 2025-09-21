#include<iostream>
using namespace std;
class Grandparent{
    public:
    string familyname;

};
class parent : public Grandparent{
    public:
    string fathername;
};
class child : public parent{
    public:
    string name;
    void display(){
        cout<<"Familyname: "<<familyname<<endl;
        cout<<"Fathername: "<<fathername<<endl;
        cout<<"Child name: "<<name<<endl;

    }
};
int main(){
    child c1;
    c1.familyname="sharma";
    c1.fathername="rahul";
    c1.name="ram";
    c1.display();
    return 0;
    
}
