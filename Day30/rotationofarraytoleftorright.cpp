#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end){
    while(start<=end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
    }
}
void rotatetoright(int arr[], int n , int k){
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}
void rotatetoleft(int arr[], int n, int k){
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n1;
    cin>>n1;
    int arrright[n1];
    for(int i=0;i<n1;i++){
        cin>>arrright[i];
    }

    int k1;
    cin>>k1;
    
    int n2;
    cin>>n2;
    int arrleft[n2];
    for(int i=0;i<n2;i++){
        cin>>arrleft[i];
    }
    int k2;
    cin>>k2;
    rotatetoleft(arrleft,n2,k2);
    for(int i=0;i<n2;i++){
        cout<<arrleft[i]<<" ";
    }
    cout<<endl;
    rotatetoright(arrright,n1,k1);
    for(int i=0;i<n1;i++){
        cout<<arrright[i]<<" ";
    }


}