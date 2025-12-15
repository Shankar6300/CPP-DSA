#include<bits/stdc++.h>
using namespace std;
bool rotatestring(string &s, string &goal){
    if(s.length()!=goal.length()) return false;
    for(int i=0;i<s.length();i++){
        string rotated = s.substr(i)+s.substr(0,i);
    if(rotated==goal) return true;   
 }

}
int main(){
string s = "waterbottle";
string goal = "terbottlewa";
if(rotatestring(s,goal)){
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}
}