#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int top=0,bottom=r-1,left=0,right=c-1;
    while(top<=bottom&&left<=right){
        for(int j=left;j<=right;j++) cout<<arr[top][j]<<" ";
        top++;
        for(int i=top;i<=bottom;i++) cout<<arr[i][right]<<" ";
        right--;
        if(top<=bottom){
            for(int j=right;j>=left;j--) cout<<arr[bottom][j]<<" ";
            bottom--;
        }
        if(left<=right){
            for(int i=top;i>=bottom;i--) cout<<arr[i][left]<<" ";
            left++;

        }

        
    }
    return 0;
}