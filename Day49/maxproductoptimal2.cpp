#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>& nums){
    int n = nums.size();
    int res = nums[0];
    int maxprod = nums[0];
    int minprod = nums[0];
    for(int i=1;i<n;i++){
        int curr = nums[i];
        if(curr<0) swap(maxprod,minprod);
        maxprod = max(curr,maxprod*curr);
        minprod = min(curr,minprod*curr);
        res = max(res,maxprod);
    }
    return res;
}
int main(){
      vector<int> arr = {1,2,-3,0,-4,-5};
    int result = maxproduct(arr);
    cout<<result<<endl;
}