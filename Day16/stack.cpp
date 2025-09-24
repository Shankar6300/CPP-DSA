#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Top element: "<<st.top()<<endl;
    st.pop();
    cout<<"After removing top element: "<<st.top()<<endl;
    cout<<"Travering the stack: "<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}