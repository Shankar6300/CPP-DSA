#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string sub;
    getline(cin,sub);
    size_t pos=s.find(sub);
    if(pos!=string::npos){
        cout<<"substring found at index: "<<pos<<endl;
    }
    else{
        cout<<"substring not found"<<endl;
    }

}