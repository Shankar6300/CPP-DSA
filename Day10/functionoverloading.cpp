#include<iostream>
using namespace std;
int add(int a,int b,int c){
    return a+b+c;
}
int add(double a, double b){
    return a+b;
}
int add(int a, int c){
    return a+c;
}
int main(){
    cout<<add(2,3,4)<<endl;
    cout<<add(2.0,3.0)<<endl;
    cout<<add(1,2);

}