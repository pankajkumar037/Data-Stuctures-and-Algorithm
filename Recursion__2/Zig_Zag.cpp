#include<bits/stdc++.h>
using namespace std;

void zigzag(int n){
    if(n==0) return;
    cout<<n<<" "; // pre
    zigzag(n-1);
    cout<<n<<" ";//in 
    zigzag(n-1);
    cout<<n<<" ";//post
}

int main(){
   int n;
   cin>>n;
   cout<<endl;
   zigzag(n);
}