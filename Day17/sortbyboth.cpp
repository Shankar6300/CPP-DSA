#include<bits\stdc++.h>
using namespace std;
bool cmp(pair<string,int> a, pair<string,int> b){
    if(a.second!=b.second) return a.second>b.second;
    return a.first<b.first;
}
int main(){
    vector<pair<string,int>> student = {{"alice",75},{"ramu",85},{"sita",90}};
    sort(student.begin(),student.end(),cmp);
    for(auto s : student){
        cout<<"("<<s.first<<","<<s.second<<")"<<endl;
    }
    cout<<endl;
    return 0;
    
}