#include<bits/stdc++.h>
using namespace std;
int duplicates(vector<int> & arr){
    int n = arr.size();
    int freq[n+1] = {0};
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==0){
            freq[arr[i]]+=1;
        }
        else{
            return arr[i];
                }
    }
    return 0;
}
int main(){
    vector<int> arr = {2,3,4,5,2};
    
    cout<<"The duplicate element is: "<<duplicates(arr)<<endl;
    
}