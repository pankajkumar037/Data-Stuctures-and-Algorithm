#include<iostream>
#include<string>
#include<stack>
using namespace std;


int isBalanced(string &s){
    stack<char>st;
    int n=s.length();

    if(s[0]==')') return 0;
    if(n%2 != 0) return 0;

    for(int i=0;i<n;i++){
        if(!st.empty()){
            if(st.top()!=s[i]){
            st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        else{
            st.push(s[i]);
        }
        
    }

    if(st.size()==0) return 1;
    else return 0;
}

 
int main(){
string s="())()())";
  cout<<  isBalanced(s)<<" ";
}