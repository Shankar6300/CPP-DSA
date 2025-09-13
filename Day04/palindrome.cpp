#include<iostream>
using namespace std;
int reversenumber(int n){
    int rev=0;
    int rem;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    return rev;
}
int main(){
    int num;
    cin>>num;
    int original;
    original=num;
    int result=reversenumber(num);
    if(result==original){
        cout<<"Given number "<<num<<" is Palindrome";

    }
    else{
        cout<<"Given number "<<num<<" is not Palindrome";
    }
    return 0;
}
