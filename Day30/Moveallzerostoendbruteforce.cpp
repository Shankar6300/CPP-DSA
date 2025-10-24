#include<bits/stdc++.h>
using namespace std;
vector<int> movezeros(vector<int>& arr){
    int index=0;
    vector<int> temp(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            temp[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<arr.size();i++){
        arr[i] = temp[i];
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result = movezeros(arr);
    for(int num : result){
        cout<<num<<" ";
    }
    
}