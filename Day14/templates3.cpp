#include<iostream>
using namespace std;
template <typename T>
T sumarray(T arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr1[5]={1,2,3,4,5};
    cout<<sumarray(arr1,5)<<endl;
    double arr2[4]={2.0,3.0,4.0,5.0};
    cout<<sumarray(arr2,4)<<endl;
}