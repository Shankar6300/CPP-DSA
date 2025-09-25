#include<bits/stdc++.h>
using namespace std;
char firstnonrepeating(string str){
    map<char,int> freq;
    for(char ch : str){
        freq[ch]++;
    }
    for(char ch : str){
        if(freq[ch]==1){
            return ch;
        }

    }
    return '\0';
}
int main(){
    string str = "aabcd";
    char result = firstnonrepeating(str);
    if(result!='\0'){
        cout<<"First non repeating charcater :"<<result<<endl;
    }
    else{
        cout<<"No non repeating character"<<endl;
    }
}