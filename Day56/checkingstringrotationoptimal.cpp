#include<bits/stdc++.h>
using namespace std;
bool rotatestring(string &s, string &goal){
    if(s.length()!=goal.length()) return false;
    
        string doubleds = s+s;
    return doubleds.find(goal)!=string::npos; 
 }

int main(){
string s = "waterbottle";
string goal = "terbottlewa";
cout<<(rotatestring(s,goal)?"true": "false")<<endl;

}