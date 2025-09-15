#include<iostream>
#include<string>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int v=0,co=0;
    for(int i=0;i<n;i++){
        char ch=tolower(s[i]);
        if(ch>='a' && ch<='z'){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            }
            else{
            co++;
            }
        }
    }
    cout<<"vowels :"<<v<<endl;
    cout<<"consonants: "<<co<<endl;
    return 0;
}