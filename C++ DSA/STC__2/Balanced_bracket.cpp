#include<iostream>
#include<string>
#include<stack>
using namespace std;


int isBalanced(string s){
    stack<char>st;
   // bool flag=false;
    if((s.length()%2) !=0) return false;
    for(int i=0;i<s.length();i++){
        if(s[i]='(') st.push(s[i]);
        else{
            if(st.size()==0) return false;
            st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}

 
int main(){
string s=")()(";
  cout<<  isBalanced(s);
}