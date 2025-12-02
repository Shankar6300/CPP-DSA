#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>& nums,int low, int high, int target){
    int n = nums.size();
    if(low>high) return -1;
    while(low<=high){
        int mid  = (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]) return binarysearch(nums,mid+1,high,target);
        else return binarysearch(nums,low,mid-1,target);

    }
}
int search(vector<int>& nums, int target){
    return binarysearch(nums,0,nums.size()-1,target);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 4;
    int ind = search(arr,target);
    if(ind == -1){
        cout<<"The target is not found"<<endl;
    }
    else {
        cout<<"The target is found at index: "<<ind<<endl;
    }
}