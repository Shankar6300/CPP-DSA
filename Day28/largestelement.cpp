#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int largestelement(vector<int>& nums){
        int largest=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>largest)
                largest=nums[i];
            
            
        }
        return largest;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    Solution s;
    cout<<s.largestelement(nums);
}