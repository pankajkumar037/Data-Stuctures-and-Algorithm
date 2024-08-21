#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main(){

    int arr[]={3,1,2,5,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    stack<int>st;
    int nge[n];

    nge[0]=-1;
    st.push(arr[0]);

    for(int i=1;i<n;i++){
        // 1->pop
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }  
        // 2->ans
        if(st.size()>0) nge[i]=st.top();
        else nge[i]=-1;
        //3->push
        st.push(arr[i]);

    }


    for(int i=0;i<n;i++){
    cout<<nge[i]<<" ";
    }

}


