#include<bits/stdc++.h>
using namespace std;

void subset(string str,string n){
    if(str.size()==0){
        cout<<n<<endl;
        return;
    }
    
    char ch=str[0];
    subset(str.substr(1),n+ch);
    subset(str.substr(1),n);

}


int main(){
    string str="abc";
    subset(str,"");
}