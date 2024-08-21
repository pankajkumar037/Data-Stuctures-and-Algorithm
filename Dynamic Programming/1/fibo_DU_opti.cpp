#include<bits/stdc++.h>
using namespace std;

// yahan extra array ki koii jarurat nahi hai
int FiboBU(int n){
   
    if(n<2) return n;
    int a=0;
    int b=1;
    int c;
    int i=2;
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return c;
    
}


int main(){
    int n;
    cin>>n;
    
    cout<<FiboBU(n)<<"\n";
}