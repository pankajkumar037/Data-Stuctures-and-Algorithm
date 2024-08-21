/*
    Q. WAP to calculate the sum of od  numbers between a nd b(both inclusive)
    using recursion
*/
#include<bits/stdc++.h>
using namespace std;

int oddsum(int curr,int n){
    if(curr>n) return 0;

    if(curr%2 !=0){
        //return  oddsum(curr+1,n);
        return curr + oddsum(curr+2,n);
    }
    
    
    
}

int main(){
    
   cout<< oddsum(1,6);
}