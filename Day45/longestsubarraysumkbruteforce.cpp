#include<bits/stdc++.h>
using namespace std;
int longestsubarraysumk(vector<int>& arr,int k){
    int  n = arr.size();
    int len = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            long long sum = 0;
            for(int K = i; K<=j;K++){
                sum += arr[K];
            }
            if(sum==k)
                len = max(len,j-i+1);
            
        }
    }
    return len;
}
int main(){
    vector<int> arr = {2,3,5,1,9};
    int k=10;
    int result = longestsubarraysumk(arr,k);
    cout<<"The length of longest subarray sum : "<<result<<endl;
}