#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int> arr1={1,2,3,4};
    vector<int> arr2={3,4,5,6};
    set<int> unionset;
    set<int> intersectionset;
    set<int> temp;
    for(int x : arr1){
        unionset.insert(x);
    }
    for(int x : arr2){
        unionset.insert(x);
    }
    for(int x : arr1){
        temp.insert(x);
    }
    for(int x : arr2){
        if(temp.find(x)!=temp.end()){
            intersectionset.insert(x);
        }
    }
    cout<<"Union set: "<<endl;
    for(int x : unionset){
        cout<<x<<" ";

    }
    cout<<"\n";
    cout<<"Intersectionset: "<<endl;
    for(int x : intersectionset){
        cout<<x<<" ";
    }
    return 0;

}