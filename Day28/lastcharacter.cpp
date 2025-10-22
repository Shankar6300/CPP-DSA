#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    char lastcharacter(string s){
        return s[s.length()-1];
    }
};
int main(){
    string s;
    cin>>s;
    Solution s1;
    cout<<s1.lastcharacter(s);
}