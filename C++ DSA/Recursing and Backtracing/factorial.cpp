#include<iostream>
using namespace std;

int name(int n){
  if(n==0 || n==1) return 1;
  return n*name(n-1);
  

}
int main(){
  cout<<  name(4);
}