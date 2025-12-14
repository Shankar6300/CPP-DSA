#include<bits/stdc++.h>
using namespace std;
int count(int n, int x, vector<int>& arr){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n = 8;
    int x = 8;
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int ans = count(n,x,arr);
    cout<<"The number of occurences of "<<x<<" is: "<<ans<<"\n";
}