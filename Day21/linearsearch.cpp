#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target) return i;

    }
    return -1;
}
int countoccurences(int arr[], int n, int target){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target) count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int target;
    cin>>target;
    int index=linearsearch(arr,n,target);
    int counting=countoccurences(arr,n,target);
    
    if(index!=-1){
        cout<<"Elemenet found at "<<index<<endl;
    }
    else{
        cout<<"element not found"<<endl;

    }
    cout<<"Number of times the target element occured in array: "<<counting<<endl;

}