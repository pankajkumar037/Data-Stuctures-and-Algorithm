#include<bits/stdc++.h>
using namespace std;

void skipchar(string str,int idx,string n){
    if(idx==str.length()){
        cout<<n<<endl;
        return;
    }

    if(str[idx]!='a'){
        skipchar(str,idx+1,n+str[idx]);
    }
    else{
        skipchar(str,idx+1,n);
    }
}


int main(){
    string str="raghav garg";
    skipchar(str,0,"");
}