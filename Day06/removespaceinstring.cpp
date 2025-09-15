#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string result="";
    for(char ch : s){
        if(ch != ' '){
            result+=ch;
        }
    }
    cout<<"string after removing spaces: "<<result<<endl;
    return 0;
}