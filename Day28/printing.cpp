#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void printx(int x, int n){
        for(int i=0;i<n;i++){
            cout<<x;
            if(i!=n-1) cout<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int n;
    int x;
    cin>>x>>n;
    Solution s;
    s.printx(x,n);
    return 0;
}