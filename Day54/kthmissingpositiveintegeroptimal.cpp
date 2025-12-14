#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& arr,int n,int k){
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int missing = arr[mid]-mid+1;
        if(missing<k){
            low=mid+1;

        }
        else{
            high = mid-1;
        }
    }
    return k+high+1;
}
int main(){
     vector<int> arr = {4,7,9,10};
    int n = 4;
    int k = 1;
    int ans = missingnumber(arr,n,k);
    cout<<"The missing number: "<<ans<<endl;
    
}