#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n==0) return;

    cout<<"Pre "<<n<<endl;
    f(n-1);
    cout<<"In "<<n<<endl;
    f(n-1);
    cout<<"Post "<<n<<endl;
}

int main(){
    f(2);
}