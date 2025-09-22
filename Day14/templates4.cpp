#include<iostream>
using namespace std;
template <typename T>
T average(T a,T b,T c){
    return (a+b+c)/3;

}
int main(){
    cout<<average(3,2,1)<<endl;
    cout<<average(3.0,4.0,2.0)<<endl;
    return 0;
    
}