#include<iostream>
using namespace std;
class B;
class A{
    private:
    int val;
    public:
    A(int a){
        val=a;
    }
    friend int add(A obj1, B obj2);
};
class B{
    private:
    int val2;
    public:
    B(int b){
        val2=b;
    }
    friend int add(A obj1, B obj2);

};
int add(A obj1, B obj2){
    return obj1.val+obj2.val2;

}
int main(){
    A a1(10);
    B b1(20);
    cout<<add(a1,b1);
    
}