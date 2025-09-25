#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,2,1,3,4,4,5};
    set<int> un;
    for(int x : arr){
        un.insert(x);
    }
    for(int y : un){
        cout<<y<<" "<<endl;
    }
    return 0;
}