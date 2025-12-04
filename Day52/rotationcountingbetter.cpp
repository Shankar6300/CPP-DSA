#include<bits/stdc++.h>
using namespace std;
int rotationcount(vector<int>& arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return i+1;
        }
    }
}
int main(){
    vector<int> nums = {4,5,6,7,0,1,2,3};
    int count = rotationcount(nums);
    cout<<"Count: "<<count<<endl;
}