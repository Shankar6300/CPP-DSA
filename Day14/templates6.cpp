#include<iostream>
using namespace std;
template <typename T>
class Minimum{
    T x,  y,  z;
    public:
    Minimum(T a, T b, T c) : x(a),y(b),z(c){}
    T findmin(){
        T minval=x;
        if(y<minval) minval=y;
        if(z<minval) minval=z;
        return minval;
    }
};
int main(){
    Minimum<int> m1(4, 5 , 6);
    cout<<m1.findmin()<<endl;
    Minimum<double> m2(3.2,4.2,5.2);
    cout<<m2.findmin()<<endl;
    return 0;

}