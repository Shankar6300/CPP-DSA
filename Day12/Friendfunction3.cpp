#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imag;
    public:
    complex(int r, int i){
        real=r;
        imag=i;
    }
    friend complex add(complex c1, complex c2);
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

};
complex add(complex c1, complex c2){
    return complex(c1.real+c2.real,c1.imag+c2.imag);
}
int main(){
    complex c1(4,5);
    complex c2(3,2);
    complex sum=add(c1,c2);
    c1.display();
    
    c2.display();
    sum.display();
}
