#include<bits/stdc++.h>
using namespace std;

bool palindoem(string &s){
    bool flag=true;
    int i=0;
    int j=s.length()-1;
    while(j>=i){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            flag=false;
            break;
        }
    }
    return flag;

}


int main(){
    string s;
    cin>>s;
    cout<<palindoem(s);
}