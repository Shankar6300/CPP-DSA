#include<bits/stdc++.h>
using namespace std;
vector<int> majorityelement(vector<int> v){
int n = v.size();
map<int,int> mpp;
vector<int> ls;
int mini = int(n/3)+1;
for(int i=0;i<n;i++){
    mpp[v[i]]++;
    if(mpp[v[i]]==mini){
        ls.push_back(v[i]);
    }
    if(ls.size()==2) break;
}
return ls;
}
int main(){
    vector<int> v = {11,33,33,11,33,11};
    vector<int> ans  = majorityelement(v);
    cout<<"Final result: "<<endl;
    for(auto it : ans)
    cout<<it<<" ";
    cout<<"\n";
    return 0;
}