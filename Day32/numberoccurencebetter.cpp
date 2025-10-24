#include<bits/stdc++.h>
using namespace std;
int getonenumber(vector<int>& nums){
    int n = nums.size();
    int maxi=nums[0];

    for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
    }
    vector<int> hash(maxi+1,0);
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[nums[i]]==1){
            return nums[i];
        }
    }
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