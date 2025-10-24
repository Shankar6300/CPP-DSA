#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& nums, int N){
    int hash[N+1] = {0};
    for(int i=0;i<N-1;i++){
        hash[nums[i]]++;
    }
    for(int i=1;i<N;i++){
        if(hash[i]==0){
            return i;
        }
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