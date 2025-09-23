#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30};
    v.insert(v.begin()+1,100);
    cout<<"After insertion: "<<endl;
    for(int x : v){
        cout<<x<<" ";
    }
    return 0;
    
}
