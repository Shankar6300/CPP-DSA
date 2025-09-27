#include<bits\stdc++.h>
using namespace std;
int main(){
    int balance;
    cin>>balance;
    int withdraw;
    cin>>withdraw;
    try{
        if(withdraw>balance)
            throw runtime_error("Withdraw amount is greater than balance");
        balance-=withdraw;
        cout<<"withdrawn succesfully remaining balance: "<<balance<<endl;
    }
    catch (runtime_error &e){
        cout<<"Error: "<<e.what()<<endl;
    }
}