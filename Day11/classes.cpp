#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    
    Student s1;
    s1.name = "Rahul";
    s1.rollNo = 101;
    s1.marks = 89.5;

    
    Student s2;
    s2.name = "Priya";
    s2.rollNo = 102;
    s2.marks = 92.0;

    
    s1.display();
    s2.display();

    return 0;
}
