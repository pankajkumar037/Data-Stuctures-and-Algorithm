#include<bits/stdc++.h>
using namespace std;
/*
bool is_rot_string(string &s,string &r){
    int i=0;
    bool flag=false;
    int j=s.length()-1;
    string n= s+s;
    while(j<n.length()){
        if(n.substr(i,j)==r){
            flag=true;
            break;
        }
        i++;
        j++;
    }
    return flag;

}
*/
bool is_rot_string(string &s,string &r){
   
    string n= s+s;
    if(n.find(r) != string)
}


int main(){
    string s="abcd";
    string rot="acbd";
    cout<<is_rot_string(s,rot);
}