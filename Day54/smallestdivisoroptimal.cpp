#include<bits/stdc++.h>
using namespace std;
int sumbyD(vector<int>& arr,int div){
    int sum = 0;
    for(int num : arr){
        sum += ceil((double)num/div);
    }
    return sum;
}
int smallestdivisor(vector<int>& arr,int limit){
    int n = arr.size();
    if(n>limit) return -1;
    int maxelement = *max_element(arr.begin(),arr.end());
    int low = 1;
    int high = maxelement;
    while(low<=high){
        int mid = (low+high)/2;
        if(sumbyD(arr,mid)<=limit){
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int limit = 8;
    int ans = smallestdivisor(arr,limit);
    cout<<"The minimum divisor: "<<ans<<endl;
}