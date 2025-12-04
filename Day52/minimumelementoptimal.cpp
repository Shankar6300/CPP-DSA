#include<bits/stdc++.h>
using namespace std;
int minimum(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return arr[low];
}
int main(){
    vector<int> arr = {3,4,5,1,2};
    cout<<"The minimum element is : "<<minimum(arr)<<endl;
}