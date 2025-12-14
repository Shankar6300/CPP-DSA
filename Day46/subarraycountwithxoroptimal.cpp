#include<bits/stdc++.h>
using namespace std;
int countsubarraysxor(vector<int> &arr, int k){
    int n = arr.size();
    int xr = 0;
    map<int,int> mpp;
    int cnt = 0;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr = xr ^ arr[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    int result  = countsubarraysxor(arr,k);
    cout<<"The number of subarrays with xor k is: "<<result<<endl;
}