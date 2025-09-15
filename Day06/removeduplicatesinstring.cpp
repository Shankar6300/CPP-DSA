#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_set<char> seen;
    string result="";
    for(char c : s){
        if(seen.find(c)==seen.end()){
            result+=c;
            seen.insert(c);
        }
    }
    cout<<"string after removing duplicates: "<<result<<endl;
    return 0;
}
