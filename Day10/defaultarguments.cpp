#include<iostream>
using namespace std;
void greet(string name="shankar", string msg="welcome" ){
    cout<<"hello "<<name<<" "<<msg<<endl;
}
int main(){
    greet();
    greet("shanmukh","gdmorning");
    greet("chinna");
}