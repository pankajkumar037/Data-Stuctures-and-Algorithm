// CSES  Problrm set removing digits

#include<bits/stdc++.h>
using namespace std;

vector<int>d;

void digits(int n){
    d.clear();
    while(n>0){
        int x=n%10;
        if(x!=0){
            d.push_back(x);
        }
        n/=10;
    }
}

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;

    digits(n);
    int m=INT_MAX;
    for(int i=0;i<d.size();i++){
        int y=f(n-d[i]);
        if(y<=m) m=y;
    }
    return 1+m;
}

int main(){
    int n;
    cin>>n;
    cout<< f(n);
}