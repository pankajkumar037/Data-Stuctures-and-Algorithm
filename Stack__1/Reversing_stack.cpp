#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>&st){
    stack<int>tp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        tp.push(st.top());
        st.pop();
    }

    while(tp.size()>0){
        st.push(tp.top());
        tp.pop();
    }

}

int main(){

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
   
   print(st);
   cout<<endl;


}