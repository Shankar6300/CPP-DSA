#include<bits/stdc++.h>
using namespace std;
int findallsubarrays(vector<int>& arr, int  k){
    int n = arr.size();
    map<long long ,int> mpp;
    int prefixsum=0,cnt=0;
    mpp[0]=1;
    for(int i=0;i<n;i++){
        prefixsum+=arr[i];
        int remove = prefixsum-k;
        cnt+=mpp[remove];
        mpp[prefixsum]+=1;
    }
    return cnt;

}
int main(){
    vector<int> arr = {3,1,2,4};
    int k=6;
    int result = findallsubarrays(arr,k);
    cout<<"The count of subarrays equal to k : "<<result<<endl;

}