#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    Rectangle(int l, int b){
        length=l;
        breadth=b;
        cout<<"Parameterized constructor called"<<endl;
    }
    int Area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1(4,5);
    cout<<"Area: "<<r1.Area()<<endl; 
    cout<<"Perimeter: "<<r1.perimeter()<<endl;
    return 0;
    
}