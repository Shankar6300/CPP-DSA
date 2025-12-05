#include<bits/stdc++.h>
using namespace std;
int nthroot(int n,int m){
    int left = 1;
    int right = m;
    while(left<=right){
        int mid = (left+right)/2;
        int ans = 1;
        for(int i=0;i<n;i++){
            ans*=mid;
            if(ans>m) break;
        }
        if(ans==m) return mid;
        if(ans<m) left=mid+1;
        else right = mid-1;
    }
    return -1;
}
int main(){
     int n = 3;
    int m = 27;
    cout<<"Nth root: "<<nthroot(n,m);
    
}