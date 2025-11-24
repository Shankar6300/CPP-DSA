#include<bits/stdc++.h>
using namespace std;
int longestsubarraysumk(vector<int>& arr, int k){
    int n = arr.size();
    int left=0;
    int right = 0;
    int maxlen=0;
    int sum=0;
    while(right<n){
        sum +=arr[right];
        while(sum>k&&left<=right){
            sum-=arr[left];
            left++;

        }
        
    if(sum==k){
        maxlen=max(maxlen,right-left+1);
        
    }
    right++;

    }
    return maxlen;
}
int main(){
    vector<int> arr = {2,3,5,1,9};
    int k=10;
    int result = longestsubarraysumk(arr,k);
    cout<<"The length of longest subarray sum is: "<<result<<endl;

}