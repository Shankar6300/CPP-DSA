#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>& arr){

    int n=arr.size();
    int maxpro=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                maxpro=max(maxpro,arr[j]-arr[i]);
            }
        }
    }
    return maxpro;
}
int main(){
    vector<int> arr = {7,1,6,5,4,3};
    int result=maxprofit(arr);
    cout<<"Max profit: "<<result<<endl;
}