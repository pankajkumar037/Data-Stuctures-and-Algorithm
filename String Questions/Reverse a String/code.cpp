#include<bits/stdc++.h>
using namespace std;

string reverse(string &s){
    int i=0;
    int j=s.length()-1;
    
    while(j>=i){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    
    return s;
}


int main(){
    string s;
    cin>>s;
    cout<<reverse(s);
}