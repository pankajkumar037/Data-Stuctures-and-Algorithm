#include<iostream>
using namespace std;
// withpout using parameter
int Sum_1_to_n(int n){
   
    if(n==1) return 1;
    return n+Sum_1_to_n(n-1);


}
int main(){
    int n;
    cin>>n;
   cout<< Sum_1_to_n(n);
}
// with parameter