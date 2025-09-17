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
    
    for(int i=0;i<r;i++){
        int rowSum=0;
        for(int j=0;j<c;j++){
            rowSum += arr[i][j];
        }
        cout<<"row "<<i<<" sum "<<rowSum<<endl;
    }
    

}