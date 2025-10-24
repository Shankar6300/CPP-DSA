#include<bits/stdc++.h>
using namespace std;
int getonenumber(vector<int>& nums){
    int n = nums.size();
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^nums[i];
    
    }
    return xorr;
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans=getonenumber(nums);
    cout<<"Single element is: "<<ans<<endl;
    
}