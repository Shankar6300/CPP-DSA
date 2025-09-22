#include<iostream>
using namespace std;
template <typename T>
class Calculator{
    T a, b;
    public:
    Calculator(T x, T y) : a(x), b(y){}
    T add(){
        return a+b;
    }
    T sub(){
        return a-b;

    }
    T mul(){
        return a*b;
    }
    T div(){
        return a/b;
    }
};
int main(){
    Calculator<int> c1(2,3);

    cout<<c1.sub()<<endl;
    cout<<c1.add()<<endl;
    Calculator<double> c2(4.2,3.2);
    cout<<c2.add()<<endl;
    cout<<c2.sub()<<endl;


}