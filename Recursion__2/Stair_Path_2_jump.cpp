#include<iostream>
using namespace std;

int sp2(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return sp2(n-1)+sp2(n-2);
}

void printstep(int n,string s){ // nahi hua tha
    if(n==1){
        cout<<s<<endl;
        return;
    }
    if(n==2){
        cout<<s<<endl;
        return;
    }

    printstep(n-1,s+'1');
    printstep(n-2,s+'2');
}

int main(){
    int n;
    cin>>n;
    cout<< sp2(n)<<endl;
    printstep(n,"");
}