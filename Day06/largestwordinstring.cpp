#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    string word,largest;
    stringstream ss(s);
    while(ss >> word){
        if(word.length()>largest.length()){
largest=word;
        }
    }
    cout<<"largest word in string is "<<largest<<endl;
}