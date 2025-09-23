#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50};
    v.erase(v.begin()+2);
    for(int x : v){
        cout<<x<<" ";
    }
    return 0;

}