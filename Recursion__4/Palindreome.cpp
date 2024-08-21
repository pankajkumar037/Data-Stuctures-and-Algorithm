#include<bits/stdc++.h>
using namespace std;

bool ispalindrrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return ispalindrrome(s,i+1,j-1);
}

int main(){
    string s="racecar";
    cout<<ispalindrrome(s,0,s.length()-1);
}