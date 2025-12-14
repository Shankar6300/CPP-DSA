#include<bits/stdc++.h>
using namespace std;
string longestcommonprefix(vector<string> s){
    if(s.empty()) return "";
    sort(s.begin(),s.end());
    string first = s[0];
    string last = s[s.size()-1];
    string ans = "";
    int minlength = min(first.size(),last.size());
    for(int i=0;i<minlength;i++){
        if(first[i]!=last[i]) break;
        ans+=first[i];
    }
    return ans;
}
int main(){
    vector<string> s = {"interview", "internet", "internal", "interval"};
    string res = longestcommonprefix(s);
    cout<<"Longest common prefix: "<<res<<endl;
}