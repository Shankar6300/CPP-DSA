#include<bits\stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    try{
    if(b==0){
        throw runtime_error("Division by zero");
        cout<<"Result: "<<a/b<<endl;
    }
}
    catch (runtime_error &e){
        cout<<"Error: "<<e.what()<<endl;

    }

}