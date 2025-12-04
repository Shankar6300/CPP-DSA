#include<bits/stdc++.h>
using namespace std;
int singleelement(vector<int>& arr){
    int n = arr.size();
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr = {1,1,2,2,3,4,4,5,5};
    int ans = singleelement(arr);
    cout<<"Single element: "<<ans<<endl;
}