#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int target){
int low = 0 , high = n - 1;

while(low<=high){
    int mid = low + (high - low)/2;
if(arr[mid]==target) return mid;
else if(arr[mid]<target) low = mid+1;
else high = mid-1;
}
return -1;

}
int searchinsert(int arr[],int n, int target){
int low = 0 , high = n - 1;

while(low<=high){
    int mid = low + (high - low)/2;
if(arr[mid]==target) return mid;
else if(arr[mid]<target) low = mid+1;
else high = mid-1;
}
return low;

}
int firstoccurence(int arr[],int n,int target){
int low = 0 , high = n - 1,result=-1;

while(low<=high){
    int mid = low + (high - low)/2;
if(arr[mid]==target) {result=mid;
high=mid-1;
}
else if(arr[mid]<target) low = mid+1;
else high = mid-1;
}
return result;
}
int lastoccurence(int arr[],int n,int target){
int low = 0 , high = n - 1,result=-1;

while(low<=high){
    int mid = low + (high - low)/2;
if(arr[mid]==target) {
    result=mid;
    low=mid+1;
}
else if(arr[mid]<target) low = mid+1;
else high = mid-1;
}
return result;
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
    int index=binarysearch(arr,n,target);
    int indextoinsert=searchinsert(arr,n,target);
    int firstoccurenceresult=firstoccurence(arr,n,target);
    int lastoccurenceresult=lastoccurence(arr,n,target);

    
    if(index!=-1){
        cout<<"Element found at index "<<index<<endl;
        
        
    }
    else{
        cout<<"correct index of the target where it can be inserted "<<indextoinsert<<endl;

    }
    cout<<"First occurence of target element "<<firstoccurenceresult<<endl;
    cout<<"last occurence of target element "<<lastoccurenceresult<<endl;
    return 0;

}
