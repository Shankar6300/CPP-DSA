#include<iostream>
using namespace std;
struct employee{
    int id;
    string name;
    float salary;
};
int main(){
    int n;
    cin>>n;
    employee arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter employee details: ";
        cin>>arr[i].id>>arr[i].name>>arr[i].salary;
    }
    employee rich=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i].salary>rich.salary){
            rich=arr[i];
        }
    }
    cout<<"employee "<<rich.name<<" with highest salary "<<rich.salary;
}