#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    Rectangle r1;
    cin>>r1.length>>r1.breadth;
    cout<<"Area = "<<r1.area()<<endl;
    cout<<"Perimeter = "<<r1.perimeter()<<endl;
    
}