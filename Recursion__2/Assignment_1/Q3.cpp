/*
    Q. checking for a number if it is power of 2 or not..
    using recursion
*/

#include<bits/stdc++.h>
using namespace std;

bool  ispow2(int n){
  if(n==1) return true;
    
   if(n%2==0) {
        return ispow2(n/2);
   }
   else{
    return false;
   }
     
}

int main(){
    int n;
    cin>>n;
    cout<<ispow2(n);
}