#include<iostream>
using namespace std;
int main(){
    
    int x;
    cin>>x;
    int *p=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
}