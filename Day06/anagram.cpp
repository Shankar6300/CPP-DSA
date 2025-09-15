#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1 == s2){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"not anagram"<<endl;
    }
    return 0;
}