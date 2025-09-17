#include<iostream>
using namespace std;
struct student{
    int id;
    string name;
    float marks;
};
int main(){
    int n;
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter student details: ";
        cin>>arr[i].id>>arr[i].name>>arr[i].marks;
    }
    student topper=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i].marks>topper.marks){
            topper=arr[i];
        }
    }
    cout<<"student "<<topper.name<<" with "<<topper.marks;
}