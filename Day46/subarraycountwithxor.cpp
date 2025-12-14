#include<bits/stdc++.h>
using namespace std;
int countsubarraysxor(vector<int> & arr, int k){
    int n = arr.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int xrr = 0;
            for(int k = i;k<=j;k++){
                xrr = xrr ^ arr[k];
            }
            if(xrr==k)
                cnt++;
            
            

        }
    }
    return cnt;
}
int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    int result  = countsubarraysxor(arr,k);
    cout<<"The number of subarrays with xor k is: "<<result<<endl;

}