#include<bits/stdc++.h>
using namespace std;
int countsubarrayxor(vector<int> & arr, int k){
    int n = arr.size();
    int cnt = 0;
    for(int i=0;i<n;i++){
        int xrr = 0;
        for(int j=i;j<n;j++){
            xrr = xrr ^ arr[j];
            if(xrr==k) cnt++;
        }
    }
    return cnt;
}
int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    int result  = countsubarrayxor(arr,k);
    cout<<"The number of subarrays with xor k is: "<<result<<endl;
}