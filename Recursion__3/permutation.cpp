#include<bits/stdc++.h>
using namespace std;

void permutation(string str,string a){
    if(str==""){
        cout<<a<<endl;
        return;
    }

    for(int i=0;i<=str.length();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permutation(left+right,a+ch);
        
    }
    

}

int main(){
    string str="abcd"; 
    permutation(str,"");
    
}