#include<iostream>
using namespace std;

string decimal_to_binary(int n){
    string s="";
    while(n>0){
        if(n%2==0){
            s="0"+s;
        }
        else{
            s="1" +s;
        }
        n=n>>1;
    }
    return s;
   
}


int main(){
int n;
cin>>n;

cout<< decimal_to_binary(n);


}