#include<iostream>
using namespace std;
int maxinarray(int *arr, int n){
    int maxval=*arr;
    for(int i=1;i<n;i++){
        if(*(arr+i)>maxval){
            maxval=*(arr+i);
        }
    }
    return maxval;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum element: "<<maxinarray(arr,n)<<endl;
    return 0;
}