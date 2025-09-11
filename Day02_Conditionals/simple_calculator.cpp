#include<iostream>
using namespace std;
int main(){
    int a , b;
    char op;

    cout<<"Enter the input: ";
    cin >> a >> b;
    cin>>op;
    switch(op){
        case '+':
        cout<<"result = "<<a + b;
        break;
        case '-':
        cout<<"result = "<< a - b;
        break;
        case '*':
        cout<<"result = "<< a * b;
        break;
        case '/':
        cout<<"result = "<< a / b;
        break;
        default:
        cout<<"Invalid operator";

    }

}