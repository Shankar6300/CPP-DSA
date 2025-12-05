#include<bits/stdc++.h>
using namespace std;
int squareroot(int x){
    int ans = 0;
    if(x<2) return x;
    int left = 1;
    int right = x/2;
    while(left<=right){
        int mid = (left+right)/2;
        if(mid*mid<=x){
            ans = mid;
            left = mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return ans;

}
int main(){
    int n = 27;
    cout<<"Square root of a number is: "<<squareroot(n)<<endl;
}