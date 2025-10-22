#include<bits/stdc++.h>
using namespace std;
void leftbyone(vector<int>& nums){
    int n = nums.size();
    int first=nums[0];
    for(int i=0;i<n-1;i++){
        nums[i] = nums[i+1];
    }
    nums[n-1]=first;

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    leftbyone(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

}