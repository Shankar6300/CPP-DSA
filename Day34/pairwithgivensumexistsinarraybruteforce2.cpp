#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(int n, vector<int>& arr, int target){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int moreneeded=target-num;
        if(mpp.find(moreneeded)!=mpp.end()){
            return {mpp[moreneeded],i};
        }
        mpp[num]=i;
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