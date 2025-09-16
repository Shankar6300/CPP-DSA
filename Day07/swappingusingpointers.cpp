#include<iostream>
using namespace std;
void swapnum(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}

int main(){
int a,b;
cin>>a;
cin>>b;
cout<<"before swapping: "<<a<<b<<endl;
swapnum(&a,&b);
cout<<"After swapping: "<<a<<b<<endl;
return 0;

}
