#include<iostream>
using namespace std;
void reversearray(int *arr, int n){
    int *start=arr;
    int *end=arr+n-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        *start++;
        *end--;

    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      reversearray(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i];
      }

}