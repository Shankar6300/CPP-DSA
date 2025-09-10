#include<iostream>
using namespace std;
int main() {
    int c;
    cout << "Enter Celsius: " ;
    cin >> c;
    int f;
    f = (c * 9/5) + 32;
    cout << "Fahrenheit = " << f << endl;
    return 0;
}