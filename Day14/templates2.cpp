#include<iostream>
using namespace std;
template <typename T>
T maxvalue(T a, T b){
    return (a>b)?a:b;
}
int main(){
    cout<<maxvalue(4,2)<<endl;
    cout<<maxvalue(3.0,2.0)<<endl;
    

}