#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int> arr={10,20,30};
    vector<int>:: iterator it;
    for(it=arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";

    }
    cout<<endl;
    return 0;
    
}