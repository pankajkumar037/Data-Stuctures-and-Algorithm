// CSES  Problrm set removing digits

#include<bits/stdc++.h>
using namespace std;


vector<int>dp;

vector<int>get_digits(int n){
    vector<int>result;
    while(n>0){
        int x=n%10;
        if(x!=0){
            result.push_back(x);
        }
        n/=10;
    }
    return result;
}

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];

    vector<int>d=get_digits(n);
    int m=INT_MAX;
    for(int i=0;i<d.size();i++){
       m=min(m,f(n-d[i]));
    }
    return dp[n]=1+m;
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<< f(n);
}