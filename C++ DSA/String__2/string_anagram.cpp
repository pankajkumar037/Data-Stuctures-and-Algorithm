#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  string s;
  string t;
  getline(cin,s);
  getline(cin,t);

  sort(s.begin(),s.end());
  sort(t.begin(),t.end());

if(s==t) cout<<true;
else false;






}