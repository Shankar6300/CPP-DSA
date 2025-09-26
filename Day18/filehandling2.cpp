#include<bits\stdc++.h>
using namespace std;
int main(){
    ifstream infile("students.txt");
    if(!infile){
        cout<<"error while opening file!"<<endl;
        return 1;
    }
    string line;
    while(getline(infile,line)){
        cout<<line<<endl;
    }
    infile.close();
    return 0;
    
}