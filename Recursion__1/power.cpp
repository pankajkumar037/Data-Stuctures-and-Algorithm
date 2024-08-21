#include<iostream>
using namespace std;

// Iterative Method....
// int power(int a,int b){
//     int pow=1;
//     for(int i=0;i<b;i++){
//         pow=pow*a;
//     }
//     return pow;
// }  


int power(int a,int b){

    if(b==0) return 1;
    return a*power(a,b-1);


}

int main(){
    int a=8;
    int b=2;
   cout<< power(2,8);
}