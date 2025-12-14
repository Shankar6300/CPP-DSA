#include<bits/stdc++.h>
using namespace std;
int inversioncount(vector<int>& nums){
    int cnt  = 0;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j])
            cnt++;
        }
    }
    return cnt;

}
int main(){
    vector<int> arr = {5,4,3,2,1};
    int res = inversioncount(arr);
    cout<<"The number of inversions: "<<res<<endl;
}
