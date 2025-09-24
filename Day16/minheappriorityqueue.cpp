#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(2);
    pq.push(4);

    cout<<"Top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"After pop,Top element: "<<pq.top()<<endl;
    return 0;
    
}