#include<bits/stdc++.h>
using namespace std;

// by recursion nth fibo number
void fibonacci(int n){
    vector<int>v;
    if(n==1) v.push_back(0);
    if(n==2) {
        v.push_back(0);
        v.push_back(1);
    }
    if(n>2){
        v.push_back(0);
        v.push_back(1);
        for(int i=2;i<n;i++){
            v.push_back(v[i-1] + v[i-2]);
        }
    }
    // printing
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
}