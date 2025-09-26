#include<bits\stdc++.h>
using namespace std;
int main(){
    ifstream sourcefile("source.txt");
    ofstream destfile("destination.txt");
    if(!sourcefile){
        cout<<"error while reading from file"<<endl;
        return 1;
    }
    if(!destfile){
        cout<<"error while writing to file"<<endl;
        return 1;
    }
    string line;
    while(getline(sourcefile,line)){
            destfile<<line<<endl;
    }
    sourcefile.close();
    destfile.close();
    return 0;
}