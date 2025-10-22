#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int sumoffirstlast(vector<int>& nums){
        if(nums.size()==1)
        return nums[0] + nums[0];
    return nums[0] + nums[nums.size()-1];
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
    cout<<s.sumoffirstlast(nums);
    return 0;
}
