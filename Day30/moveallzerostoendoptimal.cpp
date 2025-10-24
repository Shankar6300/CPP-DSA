#include<bits/stdc++.h>
using namespace std;
void moveallzeros(vector<int>& arr){
    int j = -1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }

    }

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    moveallzeros(arr);
    for(int num : arr){
        cout<<num<<" ";
    }
    
}