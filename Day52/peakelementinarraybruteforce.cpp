#include<bits/stdc++.h>
using namespace std;
int peak(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        bool left = (i==0) || arr[i]>=arr[i-1];
        bool right = (i==n-1) || arr[i]>=arr[i+1];
        if(left&&right) return i;
    }
    return -1;
}
int main(){
    vector<int> arr = {1, 3, 20, 4, 1, 0};
    int res = peak(arr);
    cout<<"Peak index: "<<res<<" Element: "<<arr[res]<<endl;
}