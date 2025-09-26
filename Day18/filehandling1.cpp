#include<bits\stdc++.h>
using namespace std;
int main(){
    string name;
    int rollno;
    float marks;
    cin>>name;
    cin>>rollno;
    cin>>marks;
    ofstream outfile("students.txt",ios::app);
    if(!outfile){
        cout<<"error while opening file"<<endl;
        return 1;
    }
    outfile<<"Name: "<<name<<" rollno: "<<rollno<<" marks: "<<marks<<endl;
    outfile.close();
    cout<<"Students details written to file succesfully"<<endl;
    return 0;
    

}