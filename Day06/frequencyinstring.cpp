#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    unordered_map<char, int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    for(auto p : freq){
        cout<<p.first<<" -> "<<p.second<<endl;

    }
    return 0;
}
