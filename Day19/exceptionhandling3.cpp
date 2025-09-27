#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class NegativeNumberException : public exception{
    public:
    const char* what() const noexcept override { 
        return "Negative numbers not allowed";

    }

};
int main(){
    int n;
    cin>>n;
    try{
        if(n<0){
            throw NegativeNumberException();
            cout<<"Square: "<<n*n<<endl;
        }
    }
    catch (NegativeNumberException &e){
        cout<<"Error: "<<e.what()<<endl;
    }
}
