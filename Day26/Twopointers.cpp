#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>& nums, int target){
    int left=0,right=nums.size()-1;
    
    while(left<right){
        int sum = nums[left]+nums[right];
        if(sum==target){
            return {left+1,right+1};
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return {};
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> result=twosum(nums,target);
    if(!result.empty()){
        cout<<"Indices: "<<result[0]<<" "<<result[1];
    }
    else{
        cout<<"No pair found";
    }

}