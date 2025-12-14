#include<bits/stdc++.h>
using namespace std;
int countpairs(vector<int>& nums){
    int n = nums.size();
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>2*nums[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int team(vector<int>& skill){
    return countpairs(skill);
}
int main(){
    vector<int> arr = {3,2,1,4};
    int res = team(arr);
    cout<<"The number of pairs: "<<res;

}