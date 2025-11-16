#include<bits/stdc++.h>
using namespace std;
vector<int> majorityelement(vector<int> v){
    int n = v.size();
    vector<int> ls;
    for(int i=0;i<n;i++){
        if(ls.size()==0 || ls[0]!=v[i]){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(v[j]==v[i]){
                    cnt++;
                }
            }
            if(cnt>(n/3))
                ls.push_back(v[i]);
            
        }
        if(ls.size()==2)
        break;
    }
    return ls;
}
int main(){
    vector<int> v = {11,33,11,11,33,33};
    vector<int> ans = majorityelement(v);
    cout<<"Final result: "<<endl;
    for(auto it : ans)
          cout<<it<<" ";
          cout<<"\n";
          return 0;


    
}