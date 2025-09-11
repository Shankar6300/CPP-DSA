#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(a>b&&a>c){
      cout<<"Largest among three is "<<a<<endl;
    }
    else if(b>c&&b>a){
        cout<<"Largest among three is "<<b<<endl;

    }
    else{
        cout<<"Largest among three is "<<c<<endl;
        
    }
}