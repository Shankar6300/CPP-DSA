#include<iostream>
using namespace std;
bool ispalindrome(int arr[], int n){
    for(int i=0;i<n/2;i++){
        if(arr[i]==arr[n-1-i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(ispalindrome(arr,n)){
        cout<<"array is palindrome"<<endl;
    }
    else{
        cout<<"array is not palindrome"<<endl;
    }
    return 0;
}