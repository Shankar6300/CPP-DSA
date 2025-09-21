#include<iostream>
using namespace std;
class student{
public:

    string name;
    int marks;

    student(){
        name="shankar";
        marks=90;
        cout<<"default constructor called"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<" Marks: "<<marks<<endl;
    }

};
int main(){
    student s1;
    s1.display();
    return 0;
}