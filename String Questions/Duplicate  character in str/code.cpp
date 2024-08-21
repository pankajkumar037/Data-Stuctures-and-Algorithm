#include<bits/stdc++.h>
using namespace std;

void duplicatecahr(string &s){
  
    unordered_map<char,int>count;
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }

    // printing duplicate element
    for(auto it:count){
        if(it.second>1){
            cout<<it.first<<"->"<< it.second<<endl;
        }
    }
   
}


int main(){
    string s;
    cin>>s;
    duplicatecahr(s);
}