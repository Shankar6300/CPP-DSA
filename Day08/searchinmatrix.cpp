#include<iostream>
using namespace std;
int main(){
    int r;
    int c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    bool found = false;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==target){
                cout<<"found at position ("<<i<<","<<j<<")"<<endl;
                found = true;
            }
        }
    }
    if(!found){
cout<<"Not found"<<endl;
    }
}