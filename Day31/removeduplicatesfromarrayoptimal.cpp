#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>& nums){
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
        }
        return i+1;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result = removeduplicates(nums);
    cout<<result<<endl;
    for(int i=0;i<result;i++){
        cout<<nums[i]<<" ";
    }
}