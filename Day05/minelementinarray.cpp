#include<iostream>
using namespace std;
int mininArray(int arr[], int n){
    int mini=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
        
    }
    return mini;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"minimum element "<<mininArray(arr,n);
    return 0;
}