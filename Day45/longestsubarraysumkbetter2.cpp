#include<bits/stdc++.h>
using namespace std;
int longestsubarraysumk(vector<int>& arr, int k){
    int n = arr.size();
    long long sum = 0;
    int maxlen = 0;
    unordered_map<long long,int> mp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem = sum - k;
        if(mp.find(rem)!=mp.end()){
            int len = i - mp[rem];
            maxlen = max(maxlen,len);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;

        }
        

    }
    return maxlen;
}
int main(){
    vector<int> arr = {2,3,5,1,9};
    int k=10;
    int result = longestsubarraysumk(arr,k);
    cout<<"The length of longest subarray sum : "<<result<<endl;
}