#include<iostream>
using namespace std;
int main(){
 int n;
 cin>> n;
 

 int lo=0;
 int hi=n;
 while(hi>=lo){
    int mid= lo+(hi-lo)/2;
    if(mid*mid == n){     
        break;
    }
    else if(mid*mid > n) hi=mid-1;
    else lo=mid+1;
 }
 cout<<"sqrt is  "<<hi;

}
