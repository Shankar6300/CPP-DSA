#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s, string t){
    if(s.size()!=t.size()) return false;
    vector<int> freq(26,0);
    for(char c : s){
        freq[c - 'a']++;
    }
    for(char c : t){
        freq[c - 'a']--;
    }
    for(char count : freq){
        if(count!=0) return false;
    }


}
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    if(isanagram(s,t)){
        cout<<"Yes both strings are anagram"<<endl;
    }
    else{
        cout<<"Not anagram"<<endl;
        
    }
}