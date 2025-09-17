#include<iostream>
using namespace std;
struct student{
    int id;
    string name;
    int mark;
};
int main(){
    student s;
    cin>>s.id>>s.name>>s.mark;
    cout<<s.id<<" "<<s.name<<" "<<s.mark<<endl;

    return 0;
}