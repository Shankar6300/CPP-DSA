#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}