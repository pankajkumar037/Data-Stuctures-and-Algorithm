/* // test case 
    5 3
    10 30 40 50 20
    ans->30
*/

#include<bits/stdc++.h>
using namespace std;

vector<int>h;
int k;

int f(int i){
  if(i>=h.size()) return INT_MAX;
  if(i == h.size()-1) return 0; // last stone
    
    int ans=INT_MAX;
   for(int j=1;j<=k;j++){
       if((i+j)>= h.size()) break;
       ans=min(ans,abs(h[i]-h[i+j])+f(i+j));
    }
    return ans; 
}


int main(){
    int n;
    cin>>n>>k;
    h.clear();
    h.resize(n,-1);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    cout<<f(0)<<"\n";
}