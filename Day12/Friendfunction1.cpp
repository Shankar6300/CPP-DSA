#include<iostream>
using namespace std;
class Box{
    private:
    int length;
    public:
    Box(int l){
        length=l;

    }
    friend void printlength(Box b);

};
void printlength(Box b){
    cout<<"length: "<<b.length<<endl;
}
int main(){
    Box b1(10);
printlength(b1);
return 0;
}
