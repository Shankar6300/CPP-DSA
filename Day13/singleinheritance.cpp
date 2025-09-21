#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
    int marks;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.name="shankar";
    s1.age=20;
    s1.rollno=101;
    s1.marks=90;
    s1.display();
    return 0;
}