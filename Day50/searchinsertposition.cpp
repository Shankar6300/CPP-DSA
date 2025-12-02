#include<bits/stdc++.h>
using namespace std;
int searchinsert(vector<int> arr,int x){
    int n = arr.size();
    int low =0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int x = 6;
    int res = searchinsert(arr,x);
    cout<<"The lower bound is at index: "<<res<<endl;
}