#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

int FiboTD(int n){
    if(n<2) return n;
    if(dp[n] !=-1) return dp[n]; // checking if prob solved
    return dp[n]=FiboTD(n-1)+FiboTD(n-2);// storing ans
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<FiboTD(n)<<"\n";
}



