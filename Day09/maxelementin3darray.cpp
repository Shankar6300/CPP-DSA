#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int arr[x][y][z];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                cin>>arr[i][j][k];
            }
        }
    }
    int maxval=arr[0][0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                if(arr[i][j][k]>maxval){
                    maxval=arr[i][j][k];
                }
            }
        }
    }
    cout<<"Maximum value: "<<maxval<<endl;

}