#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int target){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {4,5,6,0,7};
    int target = 0;
    cout<<"The index of target: "<<search(arr,target)<<endl;
}