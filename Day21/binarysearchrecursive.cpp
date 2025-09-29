#include<bits/stdc++.h>
using namespace std;
int binaryrecursive(int arr[], int low, int high, int key){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return binaryrecursive(arr,mid+1,high,key);
    }
    else{
        return binaryrecursive(arr,low,mid-1,key);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int result=binaryrecursive(arr,0,n-1,key);
    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;

    }
}