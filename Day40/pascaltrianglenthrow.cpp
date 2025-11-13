#include<bits/stdc++.h>
using namespace std;
vector<long long> getNthrow(int N){
    vector<long long> row;
    long long val = 1;
    row.push_back(val);
    for(int k = 1;k<N;k++){
        val = val * (N-k)/k;
        row.push_back(val);
    }
return row;

}
int main(){
    int n=5;
    vector<long long> result = getNthrow(n);
    for(auto val : result){
        cout<<val<<" ";
    }
    
}