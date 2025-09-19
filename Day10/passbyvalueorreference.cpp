#include<iostream>
using namespace std;
void byvalue(int x){
 x=100;
}
void byreference(int &x){
     x=200;
}
int main(){
    int a=10;
    byvalue(a);
    cout<<a<<endl;
    byreference(a);
  cout<<a<<endl;
}