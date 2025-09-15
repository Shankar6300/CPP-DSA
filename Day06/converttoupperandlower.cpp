#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    string upper=s;
    string lower=s;
    for(char &ch : upper){
        ch = toupper(ch);
    }
    for(char &ch : lower){
        ch = tolower(ch);
    }
    cout<<"uppercase "<<upper<<endl;
    cout<<"lowercase "<<lower<<endl;
    return 0;

}