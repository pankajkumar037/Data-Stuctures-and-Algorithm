#include<bits/stdc++.h>
using namespace std;


int Fibo(int n){
    if(n<2) return n;
    return Fibo(n-1)+Fibo(n-2);
}



int main(){
    int n;
    cin>>n;
    cout<<Fibo(n);
}