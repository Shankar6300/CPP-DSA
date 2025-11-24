#include<bits/stdc++.h>
using namespace std;
int findallsubarrays(vector<int>& arr, int k){
    int n = arr.size();
    int cnt=0;
    for(int i=0;i<n;i++){
    long long sum = 0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
        if(sum==k){
            cnt++;
        }
    }
}
return cnt;
}
int main(){
    vector<int> arr = {3,1,2,4};
    int k=6;
    int result = findallsubarrays(arr,k);
    cout<<"The count of subarrays equal to k : "<<result<<endl;

}