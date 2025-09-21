#include<iostream>
using namespace std;
class Array{
    private:
    int* arr;
    int size;
    public:
    Array(int s){
        size = s;
        arr = new int[size];
        cout<<"Array of size "<<size<<" created"<<endl;
    }
    void input(){
        cout<<"Enter "<<size<<" elements: ";
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"Array elements: ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    ~Array(){
        delete[] arr;
        cout<<"Array of size "<<size<<" destroyed"<<endl;
    }
};
int main(){
    Array a1(5);
    a1.input();
    a1.display();
    return 0;
}