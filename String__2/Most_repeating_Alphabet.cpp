#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="leetcooode";
  int n=s.length();
  
  // creating special array
  vector<int>v(26,0);

  for(int i=0;i<n;i++){
    int scii=int(s[i]);
    int idx=scii-97;
    v[idx]++;
  }
  int max=INT_MIN;
  for(int i=0;i<26;i++){
    if(v[i]>max)  max=v[i];
  }

  for(int i=0;i<26;i++){
    if(v[i]==max){
      cout<<char(i+97)<<" ";
      
    }
  }
  zz
}