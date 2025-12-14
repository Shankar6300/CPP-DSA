#include<bits/stdc++.h>
using namespace std;
int firstoccurence(vector<int>& arr,int x,int n){
    int low = 0;
    int high = n-1;
    int first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            first = mid;
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;

}
int lastoccurence(vector<int>& arr, int x, int n){
    int low = 0;
    int high = n-1;
    int last = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return last;
}
pair<int,int> findoccurence(vector<int>& arr,int x, int n){
    int first = firstoccurence(arr,x,n);
    if(first==-1) return {-1,-1};
    int last = lastoccurence(arr,x,n);
    return {first,last};
}
int count(vector<int>& arr,int x, int n){
    pair<int,int> ans = findoccurence(arr,x,n);
    if(ans.first==-1) return 0;
    return (ans.second - ans.first+1);
}
int main(){
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 8;
    int ans = count(arr, n, x);
    cout << "The number of occurrences is: "
         << ans << "\n";
    return 0;
}