#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    if(isprime(num)){
        cout<<"given number "<<num<<" is prime"<<endl;

    }
    else{
        cout<<"given number "<<num<<" is not prime"<<endl;
    }
    return 0;
}