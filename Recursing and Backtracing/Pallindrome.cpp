        // functional code 
#include<iostream>
#include<string>
using namespace std;

bool reverse(string s,int i){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return(s,i+1);
}

int main(){
  string s="MADAM";
 cout<< reverse(s,0);
    
}