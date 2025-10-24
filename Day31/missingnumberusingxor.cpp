#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& nums, int N){
    int xor1 = 0 , xor2=0;
    for(int i=0;i<N-1;i++){
        xor2=xor2^nums[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return xor1^xor2;
}
int main(){
int N;
    cin>>N;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=missingnumber(nums,N);
    cout<<"Missing number is "<<result<<endl;
}