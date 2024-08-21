#include<bits/stdc++.h>
using namespace std;



vector<int>dp;
int f(int n){
    if(n==1) return 1;
    if(n==2) return 2;
   // if(dp[n]!= -1) return dp[n];
    return f(n-1)+ (n-1)*f(n-2);
   // return dp[n];

}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+5,-1);
   
    cout<<f(n);
}