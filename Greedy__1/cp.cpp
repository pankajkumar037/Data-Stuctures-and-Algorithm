#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


 bool cansorted(int k,vector<int>& v){
    if(is_sorted(v.begin(),v.end())==false && k==1) return  false;
    
    return true;
 }

int main(){
    int t;
    cin>>t;
    
   while(t--){
        int n,k;
        cin>>n,k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]=x;
        }
        if(cansorted(k,v)) cout<<"YES";
        else cout<<"NO";
   }
   return 0;
    
}