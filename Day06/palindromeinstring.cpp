#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    bool ispalindrome=true;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            ispalindrome=false;
            break;
        }
        

    }
    if(ispalindrome){
        cout<<"string is palindrome"<<endl;

    }
    else{
        cout<<"string is not palindrome"<<endl;
    }
    return 0;
}