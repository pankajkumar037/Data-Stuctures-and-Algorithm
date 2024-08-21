#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;
/*
         // Brut force
int main(){
 int arr[]={3,1,2,5,4,6,2,3};
 int n=sizeof(arr)/sizeof(arr[0]);
    int nge[n];
 for(int i=0;i<n;i++){
   nge[i]=-1;
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]) {
            nge[i]=arr[j];
            break;
        }

    }
 }

 for(int i=0;i<n;i++){
    cout<<nge[i]<<" ";
 }

}
*/

// optimised


int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int nge[n];
    stack<int>st;

    nge[n-1]=-1;
    st.push(arr[n-1]);

    for(int i=n-2;i>=0;i--){
        //  1->Pop
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // 2->ans
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        // 3->push
        st.push(arr[i]);

    }

    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

}

























