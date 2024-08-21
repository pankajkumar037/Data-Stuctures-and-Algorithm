#include<iostream>
#include<cmath>
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
   cout<<s.length();
cout<<endl;
    bool flag=true;
    for(int i=0;i<s.length()-1;i++){
        for(int j=0;j<s.length()-1;j++){
            if(s[j]>s[j+1]) swap(s[j],s[j+1]);
            flag=false;
        }
        if(flag==true) break;
    }

    for(int i=0;i<s.length();i++){
     cout<<s[i]<< " ";
    }


}