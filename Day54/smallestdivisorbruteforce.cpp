#include<bits/stdc++.h>
using namespace std;
int smallestdivisor(vector<int>& arr, int limit){
    int n = arr.size();
    int maxelement = *max_element(arr.begin(),arr.end());
    for(int d=1;d<=maxelement;d++){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += ceil((double)arr[i]/(double)d);
        }
        if(sum<=limit){
            return d;
        }
    }
    return -1;
    

}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int limit = 8;
    int ans = smallestdivisor(arr,limit);
    cout<<"The minimum divisor: "<<ans<<endl;
}