#include<iostream>
using namespace std;
int maxinarray(int arr[], int n){
    int maxi=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}

    int main() {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"max element "<<maxinarray(arr,n);
    }

