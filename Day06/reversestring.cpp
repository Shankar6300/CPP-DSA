#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
    cout<<"Reversed string: "<<s<<endl;
    return 0;
}