// CSES  Problrm set removing digits

#include<bits/stdc++.h>
using namespace std;




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

vector<int>dp;
int f(int num){
    dp[0]=0;
   for(int i=0;i<=9;i++) dp[i]=1;

    for(int n=10;n<=num;n++){
     vector<int>d=get_digits(n);
     int m=INT_MAX;
        for(int i=0;i<d.size();i++){
        m=min(m,dp[n-d[i]]);
        }
    dp[n]=1+m;
    }
   
    return dp[num];
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005,-1);
    cout<< f(n);
}