#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& nums, int N){
    int sum1 = N*(N+1)/2;
    int sum2=0;
    for(int i=0;i<N-1;i++){
        sum2+=nums[i];
    }
    int sum = sum1-sum2;
    return sum;
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