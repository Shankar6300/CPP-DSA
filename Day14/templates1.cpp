#include<iostream>
using namespace std;
template <typename T>
void swapvalues(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=5,y=6;
    swapvalues(x,y);
    cout<<"x="<<x<<" y="<<y<<endl;
    double p=2.2,q=3.2;
    swapvalues(p,q);
    cout<<"p="<<p<<" q="<<q<<endl;
    return 0;

}