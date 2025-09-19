#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}
int main(){
    int a;
    cin>>a;
    cout<<"sum of "<<a<<" numbers is "<<sum(a);
    return 0;
}