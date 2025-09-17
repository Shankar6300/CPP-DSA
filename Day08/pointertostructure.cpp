#include<iostream>
using namespace std;
struct student{
    int id;
    string name;
    float marks;
};
int main(){
    student s={1,"kiran",90};
    student *ptr=&s;
    cout<<"student details: "<<endl;
    cout<<ptr->id<<endl;
    cout<<ptr->name<<endl;
    cout<<ptr->marks<<endl;
}
