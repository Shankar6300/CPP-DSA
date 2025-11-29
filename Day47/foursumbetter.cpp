#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int>& arr, int target){
    int n = arr.size();
    set<vector<int>>  ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            unordered_set<int> re;
            for(int k=j+1;k<n;k++){
                long long required = (long long)target - arr[i]-arr[j]-arr[k];
                if(re.count(required)){
                    vector<int> temp = {arr[i],arr[j],arr[k],(int)required};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);

                } 
                re.insert(arr[k]);

             }
        }
    }
    return vector<vector<int>>(ans.begin(),ans.end());
}
int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> result = foursum(arr,target);
    for(auto quad : result){
        for(auto num : quad) cout<<num<<" ";
        cout<<endl;
    }
}