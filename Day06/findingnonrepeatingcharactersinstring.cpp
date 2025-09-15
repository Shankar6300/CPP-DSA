#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    unordered_map<char,int> freq;
    for(char c : s){
        freq[c]++;
    }
char ans='\0';
for(char c : s){
    if(freq[c]==1){
        ans=c;
        break;

    }
}
if(ans!='\0'){

    cout<<"first non repeating character in string: "<<ans<<endl;
}
else{
    cout<<"no none repeating character found"<<endl;
}
return 0;
}
