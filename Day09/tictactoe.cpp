#include<iostream>
using namespace std;
int main(){
    const int size = 3;
    
    char arr[size][size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cin>>arr[i][j][k];
            }
        }
    }
    cout<<"tictactoe board: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Block: "<<i<<endl;
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;

        }
        cout<<endl;
    }
}