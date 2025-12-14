#include<bits/stdc++.h>
using namespace std;
int peak(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid+1]){
            high = mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
     vector<int> arr = {1, 3, 20, 4, 1, 0};
    int res = peak(arr);
    cout<<"Peak index: "<<res<<" Element: "<<arr[res]<<endl;
}
