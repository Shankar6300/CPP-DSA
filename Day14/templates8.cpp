#include<iostream>
using namespace std;
template <typename T>
class Arrayops{
    T* arr;
    int n;
    public:
    Arrayops(T a[], T size){
        arr=a;
        n=size;
    }
    T sum(){
        T s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        return s;

    }
    T min(){
        T m=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<m) m=arr[i];
            return m;
        }
    }
    T max(){
        T m1=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>m1) m1=arr[i];
            return m1;
        }
    }



};
int main(){
    int arr1[5]={1,2,3,4,5};
    Arrayops<int> a1(arr1,5);
    cout<<"Sum: "<<a1.sum()<<endl;
    cout<<"Max: "<<a1.max()<<endl;
    cout<<"Min: "<<a1.min()<<endl;
    return 0;
}