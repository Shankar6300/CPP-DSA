#include<iostream>
#include<string>
using namespace std;
void reverse(string s,int i){
    if(i<0) return;
    cout<<s[i];
    reverse(s,i-1);
}
int main(){
    string str;
    getline(cin,str);
    reverse(str,str.size()-1);
}
