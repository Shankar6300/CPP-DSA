#include<iostream>
using namespace std;
template <typename T>
class Pair{
    T first;
    T second;
    public:
    Pair(T a, T b) : first(a) , second(b){}
    void display(){
        cout<<"First: "<<first<<" Second: "<<second<<endl;
    }
};
int main(){
    Pair<int> p1(6,3);
    p1.display();
    Pair<string> p2("Ramu","Raju");
    p2.display();
    return 0;

}