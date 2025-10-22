#include<bits/stdc++.h>
using namespace std;
int findconsecutiveones(vector<int>& nums){
    int count=0;
    int maxi=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }
        else{
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<findconsecutiveones(nums);
}
