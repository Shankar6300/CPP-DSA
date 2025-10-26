#include<bits/stdc++.h>
using namespace std;
string twosum(int n, vector<int>& arr, int target ){
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return "YES";
            }
        }
    }
    return "NO";
}
int main(){
    int n = 5;
    vector<int> arr = {2,3,1,4,5};
    int target=5;
    string ans = twosum(n,arr,target);
    cout<<"This is the answer for Variant 1 : "<<ans<<endl;
}