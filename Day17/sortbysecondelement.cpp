#include<bits\stdc++.h>
using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b){
    return a.second < b.second;

}
int main(){
    vector<pair<string,int>> students = {{"Alice",85},{"Ramu",95},{"Rahul",75}};
    sort(students.begin(),students.end(),cmp);
    for(auto s : students){
        cout<<"("<<s.first<<","<<s.second<<")"<<endl;
    }
    cout<<endl;
    return 0;
    
}