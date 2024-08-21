#include<iostream>
using namespace std;


class stack{
    public:
    int arr[4];
    int idx;
    stack(){
        idx=-1;
    }

    void push(int val){
         idx++;
        if(idx== (sizeof(arr))/(sizeof(arr[0]))){
            cout<<"stackoverflow";
        }
      
        arr[idx]=val;
        
    }

    void pop(){
        if(idx==-1){
         cout<<"underflow";
         return;

        }
        else idx--;

    }

    void size(){
        cout<<idx+1;
    }

    void top(){
        if(idx==-1) cout<<"stack empty";
        else cout<<arr[idx];
    }

    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
    }

        
};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);



   
}
