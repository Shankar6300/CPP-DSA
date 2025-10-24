#include<bits/stdc++.h>
using namespace std;
int getonenumber(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int num=nums[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(nums[j]==num){
                cnt++;
            }
        }
        if(cnt==1) return num;

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
    cout<<"The single element is: "<<ans<<endl;
}