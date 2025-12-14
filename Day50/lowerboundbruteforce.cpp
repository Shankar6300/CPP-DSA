#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>& nums, int n, int x){
    
    for(int i=0;i<n;i++){
        if(nums[i]>=x) return i;
    }
    return n;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int x = 3;
    int res = lowerbound(arr,n,x);
    cout<<"The lower bound is at index: "<<res<<endl;
}