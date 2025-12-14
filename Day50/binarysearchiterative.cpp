#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0;

    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid])  low = mid+1;
        else high = mid-1;
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 5;
    int ind = binarysearch(arr,target);
    if(ind == -1){
        cout<<"The target is not found"<<endl;
    }
    else {
        cout<<"The target is found at index: "<<ind<<endl;
    }
}