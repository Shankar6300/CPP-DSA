#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& arr,int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}
int main(){
    vector<int> arr = {4,7,9,10};
    int n = 4;
    int k = 1;
    int ans = missingnumber(arr,n,k);
    cout<<"The missing number: "<<ans<<endl;
    
}