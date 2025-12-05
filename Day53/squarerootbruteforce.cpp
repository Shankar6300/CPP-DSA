#include<bits/stdc++.h>
using namespace std;
int floorsqrt(int n){
    int ans = 0;
    for(int i=1;i<n;i++){
        if((long long)i*i<=n){
            ans = i;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    int n = 27;
    cout<<"Square root of a number is: "<<floorsqrt(n)<<endl;

}