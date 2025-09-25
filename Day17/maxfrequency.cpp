#include<bits/stdc++.h>
using namespace std;
int maxelement(vector<int>& arr){
    map<int,int> freq;
    for(int x : arr){
        freq[x]++;

    }
    int maxcount=0;
    int element = -1;
    for( auto it : freq){

        if(it.second>maxcount){
            maxcount=it.second;
            element=it.first;
        }
    }
    return element;
}
int main(){
    vector<int> arr = {1,2,3,4,5,5};
    cout<<"Most frequent element: "<<maxelement(arr)<<endl;
    return 0;
}