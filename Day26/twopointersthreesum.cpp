#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int>& nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    for(int i = 0;i<n-2;i++){
        if(i>0&&nums[i]==nums[i-1]) continue;
        int left=i+1,right=n-1;
        while(left<right){
            int sum = nums[i]+nums[left]+nums[right];
            if(sum==0){
                result.push_back({nums[i],nums[left],nums[right]});
                while(left<right && nums[left]==nums[left+1]) left++;
                while(left<right && nums[right]==nums[right-1]) right--;
                left++;
                right--;

            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
                }

    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>> triplets = threesum(nums);
    for(auto &triplet : triplets){
        cout<<"[ "<<triplet[0]<<","<<triplet[1]<<","<<triplet[2]<<" ]";
    }
    return 0;
}
