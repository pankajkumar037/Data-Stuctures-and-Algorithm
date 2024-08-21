#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    
   string str="azyzxbdjkx";
   string s="";
   cout<<str.length();
   cout<<endl;

   for(int i=0;i<str.length();i++){
      if(str[i]>='x'){
        s.push_back(str[i]);
      }
   }
   for(int i=0;i<s.length();i++){
    cout<<s[i]<< " ";
   }
   cout<<endl;
   // sorting

   sort(s.begin(),s.end());

 for(int i=s.length();i>0;i--){
    cout<<s[i]<< " ";
   }






}