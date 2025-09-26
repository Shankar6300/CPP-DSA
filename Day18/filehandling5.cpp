#include<bits\stdc++.h>
using namespace std;
int main(){
    ofstream file("source.txt",ios::app);
    if(!file){
        cout<<"Error while writing "<<endl;
        return 1;
    }
    string newcontent;
    getline(cin,newcontent);
    file<<endl<<newcontent;
    cout<<"Data appended succesfully"<<endl;
    return 0;
    
}