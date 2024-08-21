/* // test case 
    5 3
    10 30 40 50 20
    ans->30
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>h;
int k;
vector<int>dp;
int f(){
     dp.clear();
     dp.resize(h.size(),INT_MAX);
    dp[h.size()-1]=0;
     
    for(int i=h.size()-2;i>=0;i--){
     for(int j=1;j<=k;j++){
       if((i+j)>= h.size()) break;
       dp[i]=min(dp[i],abs(h[i]-h[i+j])+dp[i+j]);
    }
    }
   
     return dp[0];

}

int main(){
    int n;
    cin>>n>>k;
    h.clear();
    h.resize(n,-1);
   
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    cout<<f()<<"\n";
}