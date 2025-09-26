#include<bits\stdc++.h>
using namespace std;
int main(){
    ifstream file("source.txt");
    if(!file){
        cout<<"Error while opening file"<<endl;
        return 1;
    }
    string word;
    int wordcount=0;
    while(file>>word){
        wordcount++;
    }
    cout<<wordcount<<endl;
    file.close();
}