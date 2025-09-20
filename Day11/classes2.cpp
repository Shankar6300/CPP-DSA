#include<iostream>
using namespace std;
class Bankaccount{
    public:
    int accnumber;
    string accholdername;
    double balance;
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposited "<<amount<<" Balance "<<balance<<endl;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"Withdrawn "<<amount<<" remaining balance "<<balance<<endl;
        }
        else{
            cout<<"insufficient balance"<<endl;
        }
    }
    void display(){
        cout<<"Account number: "<<accnumber<<endl;
        cout<<"Account holder name: "<<accholdername<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"-----------------"<<endl;
    }
};
int main(){
    Bankaccount b1;
    b1.accnumber=33752;
    b1.accholdername="shankar";
    b1.balance=5000;

    b1.display();
    b1.deposit(5000);
    b1.withdraw(9000);
    return 0;
}