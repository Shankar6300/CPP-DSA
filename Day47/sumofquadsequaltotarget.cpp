#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> sumofquads(vector<int>& arr, int target){
    int n = arr.size();
    
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;k<n;k++){
                    long long sum = (long long)arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        vector<int> temp = {arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    return vector<vector<int>>(st.begin(),st.end());
}
int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> result = sumofquads(arr,target);
    for(auto quad : result){
        for(auto num : quad) cout<<num<<" ";
        cout<<endl;
    }
    return 0;

}