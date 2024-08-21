#include<bits/stdc++.h>
using namespace std;


bool is_prime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n>3){
        bool flag=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
        return flag;
    }
}

int main(){
    int n;
    cin>>n;
   cout<< is_prime(n);
}