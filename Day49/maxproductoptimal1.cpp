#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>& nums){
    int n = nums.size();
    int pref=1,suff=1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(pref==0) pref = 1;
        if(suff==0) suff = 1;
        pref = pref*nums[i];
        suff = suff*nums[n-i-1];
        ans = max(ans,max(pref,suff));

    }
    return ans;
}
int main(){
      vector<int> arr = {1,2,-3,0,-4,-5};
    int result = maxproduct(arr);
    cout<<result<<endl;
}