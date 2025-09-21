#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    string name;
    public:
    student(string s, int m){
        name=s;
        marks=m;
    }
    bool operator==(student obj){
        return marks==obj.marks;
    }
    void display(){
        cout<<"Name: "<<name<<" Marks : "<<marks<<endl;
    }
};
int main(){
    student s1("Ramu",60);
    student s2("Raju",70);
    student s3("ritu",50);
    if(s1==s2){
        cout<<"s1 marks and s2 are same"<<endl;

    }
    else{
        cout<<"marks are differnet for s1 and s3"<<endl;
    }
    if(s1==s3){
        cout<<"s1 and s3 marks are same"<<endl;
    }
    else{
        cout<<"marks are different for s1 and s3"<<endl;
    }
}