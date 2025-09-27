#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[3] = {10,20,30};
    int index;
    cin>>index;
    try{
        if(index<0 || index>=3){
            throw out_of_range("Invalid index");
            cout<<"Value: "<<arr[index]<<endl;
        }
    }
        catch (out_of_range &e){
            cout<<"Error: "<<e.what()<<endl;

        }
    
}