#include<iostream>
using namespace std;
int binarysearch(int arr[], int low, int high, int key){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]==key) return mid;
    else if(arr[mid]>key) return binarysearch(arr,low,mid-1,key);
    else return binarysearch(arr,mid+1,high,key);
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
    int result=binarysearch(arr,0,n-1,key);
    if(result!=-1){
        cout<<"Element found at index "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
