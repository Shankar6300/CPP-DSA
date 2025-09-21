#include<iostream>
#include<cmath>
using namespace std;
class shape{
    public:
    int side;
};
class circle : public shape{
    public:
    int radius;
    

    circle(double r){
        radius=r;
        side=0;
        
    }
    void area(){
        cout<<"area of circle: "<<M_PI*radius*radius<<endl;
    }

};
class Rectangle : public shape{
public:
int length;
int breadth;
Rectangle(int l, int b){
    length=l;
    breadth=b;
    side=4;
}
void area(){
    cout<<"area of rectangle: "<<length*breadth<<endl;
}

};
int main(){
    circle c1(5);
    c1.area();
    Rectangle r1(4,5);
    r1.area();
    return 0;

}