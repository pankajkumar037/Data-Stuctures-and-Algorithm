//Try at large scale
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="abbcdeffghh";
    int n=str.length();

    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if((str[i]==str[i+1])  || (str[i]==str[i-1])) continue;
        else count++;
    }
    cout<<count;






}