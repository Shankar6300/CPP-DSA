#include<iostream>
using namespace std;
class A{
    public:
    int value;
    A(){
value=10;
    }
};
class B : virtual public A{
};
class c : virtual public A{

};
class D : public B, public c{

};
int main(){
    D obj1;
    cout<<"Value : "<<obj1.value<<endl;
    return 0;

}
