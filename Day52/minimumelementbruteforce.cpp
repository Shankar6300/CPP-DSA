#include<bits/stdc++.h>
using namespace std;
int minimum(vector<int>& nums){
    int n = nums.size();
    int minval = INT_MAX;
    for(int i=0;i<n;i++){
        minval=min(minval,nums[i]);
    }
    return minval;
}
int main(){
    vector<int> arr = {3,4,5,1,2};
    cout<<"The minimum element is : "<<minimum(arr)<<endl;
}