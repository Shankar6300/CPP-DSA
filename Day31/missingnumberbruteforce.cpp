#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& nums, int N){
    for(int i = 1 ; i < N; i++){
        int flag=0;
        for(int j=0;j<N-1;j++){
            if(nums[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0) return i;
    }
    return -1;
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