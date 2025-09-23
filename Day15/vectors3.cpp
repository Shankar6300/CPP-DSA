#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50,60};
    cout<<"Traversal using iterator: "<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}