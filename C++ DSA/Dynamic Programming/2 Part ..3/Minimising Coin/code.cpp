// CSES  Problrm set removing digits

#include<bits/stdc++.h>
using namespace std;
vector<int>coin;

int f(int n){
if(n==0) return 0;

int m=INT_MAX;
for(int i=0;i<coin.size();i++){
    if(n-coin[i]<0) continue;
   m= min(m,f(n-coin[i]));
}
return 1+m;
}

int main(){
    int n,m;
    cin>>n>>m;
    coin.clear();
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        coin.push_back(y);
    }
    cout<<f(m);
}