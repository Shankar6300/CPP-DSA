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
    
    for(int i=0;i<x;i++){
        int blocksum=0;
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                blocksum+=arr[i][j][k];
            }
            

        }
        cout<<"block sum is: "<<i<<" = "<<blocksum<<endl;
    }
}