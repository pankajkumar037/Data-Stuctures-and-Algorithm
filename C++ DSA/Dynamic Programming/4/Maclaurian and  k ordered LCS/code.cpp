#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[2005] [2005][8];

ll korderedLCS(int *a, int *b, int n, int m, int i, int j, int k) {

    if(n==i or m==j) {
        return 0;
    }

    if(dp[i][j][k] != -1) {
        return dp[i][j][k];
    }

    ll res=0;
    if(a[i]==b[j]){
        res=1+korderedLCS(a,b,n,m,i+1,j+1,k);
    }else{
        if(k>0){
            res=max({1+korderedLCS(a,b,n,m,i+1,j+1,k-1),korderedLCS(a,b,n,m,i+1,j,k),korderedLCS(a,b,n,m,i,j+1,k)});
        }
        else{
           res= max({korderedLCS(a,b,n,m,i+1,j,k),korderedLCS(a,b,n,m,i,j+1,k)});
        }
    }
    dp[i][j][k]=res;
    return res;

}