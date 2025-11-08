#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>& arr){
    int maxpro=0;
    int minpro=INT_MAX;
    int n=arr.size();
    
    for(auto price : arr ){
        minpro=min(minpro,price);
        maxpro=max(maxpro,price-minpro);
    }
    return maxpro;
}
int main(){
    vector<int> arr={7,1,4,5,6,3};
    int result=maxprofit(arr);
    cout<<"Maximum Profit: "<<result<<endl;
    
}