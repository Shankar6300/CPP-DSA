#include<bits/stdc++.h>
using namespace std;
int duplicates(vector<int> &Arr){
    int n=Arr.size();
    sort(Arr.begin(),Arr.end());
    for(int i=0;i<n-1;i++){
        if(Arr[i] == Arr[i+1]){
            return Arr[i];
        }
    }
}
int main(){
    vector<int> arr = {2,3,4,5,2};
    
    cout<<"The duplicate element is: "<<duplicates(arr)<<endl;
    
}