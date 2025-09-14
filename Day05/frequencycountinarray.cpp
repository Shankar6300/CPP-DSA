#include<iostream>
using namespace std;
void frequencycount(int arr[], int n){
    bool visited[n]={false};
    for(int i=0;i<n;i++){
        if(visited[i]){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            visited[j]=true;
            count++;}
        }
        cout<<arr[i]<<" occurs "<<count<<" time"<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    frequencycount(arr,n);

}