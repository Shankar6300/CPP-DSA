#include<iostream>
using namespace std;
struct Address{
    string city;
    int pin;
};
struct student{
    int id;
    string name;
    float marks;
    Address addr;
};
int main(){
    student s1;
    cout<<"enter student details: ";
    cin>>s1.id>>s1.name>>s1.marks>>s1.addr.city>>s1.addr.pin;
    cout<<s1.id<<" "<<s1.name<<" "<<s1.marks<<" "<<s1.addr.city<<" "<<s1.addr.pin;
    
}