#include<bits\stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    try{
        if(age<18)
            throw runtime_error("Not eligible (age<18)");
            cout<<"Eligible: "<<age<<endl;
        
    }
    catch (runtime_error &e){
        cout<<"Error: "<<e.what()<<endl;
    }
}