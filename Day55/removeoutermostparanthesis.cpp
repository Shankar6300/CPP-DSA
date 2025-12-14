#include <iostream>
#include <string>

using namespace std;
string removeoutermostparanthesis(string s) {
    string result = "";
    int level = 0;

    for (char ch : s) {
        if (ch == '(') {
            if (level > 0)
                result += ch;
            level++;
        } 
        else if (ch == ')') {
            level--;
            if (level > 0)
                result += ch;
        }
    }
    return result;
}

int main() {
    string s = "()(()())(())";

    cout << "Input string is: " << s << endl;

    string res = removeoutermostparanthesis(s);
    cout << "The result is: " << res << endl;

    return 0;
}
