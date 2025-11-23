#include<bits/stdc++.h>
using namespace std;
int longestsequence(vector<int>&a){
    int n = a.size();
    if(n==0) return 0;
    sort(a.begin(),a.end());
    int lastsmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for(int i=0;i<n;i++){
        if(a[i]-1==lastsmaller){
            cnt+=1;
            lastsmaller=a[i];

        }
        else if(a[i]!=lastsmaller){
            cnt=1;
            lastsmaller=a[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}
int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestsequence(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
