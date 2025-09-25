#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    string str = "aabccd";
    map<char,int> freq;
    for(char ch : str){
        freq[ch]++;
    }
    for(auto it : freq){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
    
}