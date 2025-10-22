#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int left=0;
    int right=s.size()-1;
    while(left<right){
        while(left<right && isalnum(s[left])) left++;
        while(left<right && isalnum(s[right])) right--;
        if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;

}
int main(){
    string s;
    getline(cin,s);
    if(ispalindrome(s)){
        cout<<"Given string is palindrome"<<endl;
    }
    else{
        cout<<"Given string is not palindrome"<<endl;
    }
    
}