#include<iostream>
#include<map>
#include<string>
using namespace std;
bool isanagram(string s1, string s2){
    map<char, int> freq;
    for(char ch : s1){
        freq[ch]++;
    }
    for(char ch : s2){
        freq[ch]--;
    }
    for(auto it : freq){
        if(it.second != 0) return false;
    }
        return true;
    
}
int main(){
    string str1 = "silent";
    string str2 = "listen";
    if(isanagram(str1,str2)){
        cout<<str1<<" and "<<str2<<" are anagrams."<<endl;
    }
    else{
        cout<<str1<<" and "<<str2<<" not anagrams"<<endl;
    }
    return 0;
    
}
