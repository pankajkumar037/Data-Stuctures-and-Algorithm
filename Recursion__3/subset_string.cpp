#include<bits/stdc++.h>
using namespace std;

void subset(string str,int idx,string n){
    if(idx==str.length()){
        cout<<n<<endl;
        return;
    }
    
    subset(str,idx+1,n+str[idx]);
    subset(str,idx+1,n);

}


int main(){
    string str="abc";
    subset(str,0,"");
}