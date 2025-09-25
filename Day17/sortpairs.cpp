#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<pair<int,string>> V = { {3,"c"}, {1,"A"}, {2,"B"} };
    sort(V.begin(),V.end());
    for(auto p : V ){
        cout<<"("<<p.first<<","<<p.second<<")"<<endl;
    }
    cout<<endl;
    return 0;

}