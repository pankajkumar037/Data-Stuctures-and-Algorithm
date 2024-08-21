#include<iostream>
using namespace std;


int flip_bits(int n){

    int x=n;
   x= x| x>>1;
    x=  x| x>>2;
   x= x| x>>4;
   x= x| x>>8;
    return (n ^ x);

}


int main(){
    int n;
    cin>>n;
     cout<<flip_bits(n)<<endl;
    cout<<flip_bits(n);
}

