#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>& nums){
    int n = nums.size();
    int maxprod = nums[0];
    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j = i;j<n;j++){
            prod = prod*nums[j];
            maxprod = max(maxprod,prod);
        }

    }
    return maxprod;
}
int main(){
    vector<int> arr = {1,2,-3,0,-4,-5};
    int result = maxproduct(arr);
    cout<<result<<endl;

}