#include<bits/stdc++.h>
using namespace std;
int minsubarraylen(int target, vector<int>& nums){
    int left=0,sum=0;
    int n = nums.size();
    int minlen=n+1;
    for(int right=0;right<n;right++){
        sum+=nums[right];
        while(sum>=target){
            minlen=min(minlen,right-left+1);
            sum-=nums[left];
            left++;
        }
    }
    return (minlen==n+1)?0:minlen;

}
int main(){
    int target;
    cin>>target;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    cout<<minsubarraylen(target,nums);
    return 0;
    
}