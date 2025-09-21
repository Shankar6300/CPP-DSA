#include<iostream>
using namespace std;
class academics{
    public:
    int marks;
    void setmarks( int m){
        marks=m;
    }

};
class sports{
    public:
    int score;
    void setscore(int s ){
        score=s;

    }

};
class student : public academics, public sports{
    public:
    string name;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"score: "<<score<<endl;
        cout<<"Total performance: "<<(marks+score)<<endl;
    }
};
int main(){
    student s1;
    s1.name="shankar";
    s1.setmarks(20);
    s1.setscore(30);
    s1.display();
    return 0;
}
