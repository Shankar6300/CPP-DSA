#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int n, vector<int>& arr, int target){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i});
    }

    sort(v.begin(),v.end());


    int left=0,right=n-1;
    while(left<right){
        int sum=v[left].first+v[right].first;
        if(sum==target){
            return {v[left].second,v[right].second};
        }
        else if(sum<target) left++;
        else right--;
    }
    return {-1,-1};
}

int main(){
    int n = 5;
    vector<int> arr = {2,3,1,4,5};
    int target=5;
    vector<int> ans = twosum(n,arr,target);
    cout<<"This is the answer for Variant 2 ["<<ans[0]<<","<<ans[1]<<"]"<<endl;
}