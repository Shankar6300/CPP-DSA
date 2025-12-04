#include<bits/stdc++.h>
using namespace std;
int rotationcount(vector<int>& arr){
    int minval = arr[0];
    int minindex = 0;
    int n = arr.size();
    for(int i = 1;i<n;i++){
        if(arr[i]<minval){
            minval=arr[i];
            minindex=i;
        }
    }
    return minindex;
}
int main(){
    vector<int> nums = {4,5,6,7,0,1,2,3};
    int count = rotationcount(nums);
    cout<<"Count: "<<count<<endl;
}