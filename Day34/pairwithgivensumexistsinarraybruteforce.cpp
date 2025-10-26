#include<bits/stdc++.h>
using namespace std;
string twosum(int n, vector<int>& arr, int target){
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int moreneeded = target-num;
        if(mpp.find(moreneeded)!=mpp.end()){
            return "YES";
        }
        mpp[num]=i;
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