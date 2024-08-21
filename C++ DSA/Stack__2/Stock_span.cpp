#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main(){
/* 
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
// using extra space
    stack<int>st;
    stack<int>helper;
    int nge[n];
    nge[0]=1;

    for(int i=1;i<n;i++){
        //pop
        int c=1;
        while(st.size()>0 && st.top()<=arr[i]){
            c++;
            int x=st.top();
            st.pop();
            helper.push(x);
        }
        // emptying helper stack
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }

        // ans
        nge[i]=c;

        //push
        st.push(arr[i]);
    }


    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }


*/
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    int pgi[n];

    pgi[0]=1;
    st.push(0);

    for(int i=1;i<n;i++){
        // 1->pop
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }  
        // 2->ans
        if(st.size()>0) pgi[i]=st.top();
        else pgi[i]=-1;
        pgi[i]=i-pgi[i];
        //3->push
        st.push(i);

    }


    for(int i=0;i<n;i++){
    cout<<pgi[i]<<" ";
    }


}