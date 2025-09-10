#include <iostream>
using namespace std;
int main () {
    int p , r , t;
    cout << "Enter P, R, T: " ;
    cin >> p >> r >> t;
    cout << "Simple Interest = " << (p * r * t)/100 << endl;
    return 0;
}