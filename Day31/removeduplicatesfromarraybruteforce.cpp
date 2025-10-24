#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>& nums){
    set<int> st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    int index=0;
    for(auto it : st){
nums[index]=it;
index++;
    }
    return index;
    
}
int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=removeduplicates(nums);
    cout<<result<<endl;
    for(int i=0;i<result;i++){
        cout<<nums[i]<<" ";
    }


}