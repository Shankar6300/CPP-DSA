#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {10,20,30,40,50};
    v.clear();
    cout<<"Is vector empty? "<<(v.empty()?"yes":"no");
    return 0;
}