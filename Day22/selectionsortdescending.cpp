#include<bits/stdc++.h>
using namespace std;
int selectionsortdescending(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int maxindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxindex]){
                maxindex=j;
            }
            
        }
        swap(arr[i],arr[maxindex]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=selectionsortdescending(arr,n);
    cout<<"Sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}