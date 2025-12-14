#include<bits/stdc++.h>
using namespace std;
int rotationcounting(vector<int>& arr){
   int n = arr.size();
      int low = 0;

    int high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]>arr[high]){
            low=mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;

}
int main(){
    vector<int> nums = {4,5,6,7,0,1,2,3};
    int count = rotationcounting(nums);
    cout<<"Count: "<<count<<endl;

}