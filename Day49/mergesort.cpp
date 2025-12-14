#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid&&right<=high){
        if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
        else temp.push_back(nums[right++]);
    }
    while(left<=mid){
        temp.push_back(nums[left++]);
    }
    while(right<=high){
        temp.push_back(nums[right++]);
    }
    for(int i=low;i<=high;i++){
        nums[i] = temp[i-low];
    }

}
void mergesort(vector<int>& nums,int low, int high){
    int n = nums.size();
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);

}
int main(){
    vector<int> arr = {3,2,5,10,4};
    int n = arr.size();
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}