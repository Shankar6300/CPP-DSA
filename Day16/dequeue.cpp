#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_front(40);
    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;
    dq.pop_front();
    dq.pop_back();
    cout<<"After pops: "<<dq.front()<<endl;
    return 0;

}
