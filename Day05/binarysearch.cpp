#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
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
    int result=binarySearch(arr,n,key);
    if(result != -1){
        cout<<"element found at index "<<result<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}