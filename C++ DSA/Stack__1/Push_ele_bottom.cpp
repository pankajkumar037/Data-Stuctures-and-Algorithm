#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>&st){
    stack<int>tp;
    while(st.size()>0){   
        tp.push(st.top());
        st.pop();
    }

    while(tp.size()>0){
        cout<<tp.top()<<" ";
        st.push(tp.top());
        tp.pop();
    }

}
void PushAtBottom(stack<int>&st,int n){

stack<int>op;
while(st.size()>0){
    op.push(st.top());
     st.pop();
}
st.push(n);
while(op.size()>0){
    st.push(op.top());
     op.pop();
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

   PushAtBottom(st,80);
  print(st);
   cout<<endl;

}