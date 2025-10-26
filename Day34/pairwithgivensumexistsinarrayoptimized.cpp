#include<bits/stdc++.h>
using namespace std;
string twosum(int n, vector<int>& arr, int target){
    sort(arr.begin(),arr.end());
    int left=0, right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "NO";

}
int main(){
    int n = 5;
    vector<int> arr = {2,3,1,4,5};
    int target=5;
    string ans = twosum(n,arr,target);
    cout<<"This is the answer for Variant 1 : "<<ans<<endl;
}