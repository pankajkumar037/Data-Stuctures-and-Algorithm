// CSES  Problrm set removing digits

#include<bits/stdc++.h>
using namespace std;

int f(int n){
    if(n==0) return 1;
    int count=0;
    for(int i=1;i<=6;i++){
        if(i>n) continue;
        count+=f(n-i);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}