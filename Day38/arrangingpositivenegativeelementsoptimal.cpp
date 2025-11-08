#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeelements(vector<int>A){
    int n = A.size();
    vector<int> ans(n,0);
    int posindex=0,negindex=1;
    for(int i=0;i<n;i++){
        if(A[i]>0){
            ans[posindex]=A[i];
            posindex+=2;
        }
        else{
            ans[negindex]=A[i];
            negindex+=2;
        }
    }
    return ans;
}
int main(){
    vector<int> A = {1,2,-4,-5};
    vector<int> ans = rearrangeelements(A);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}