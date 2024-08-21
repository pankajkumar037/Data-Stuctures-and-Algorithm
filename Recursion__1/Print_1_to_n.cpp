#include<iostream>
using namespace std;

// without parameter
// void seq0neToN(int n)
// {
//     if( n==0) return ;
 
//     seq0neToN(n-1);
//     cout<< n<<endl;
// }


// int main()
// {
//     int n;
//     cin>>n;
//     seq0neToN(n);
// }


// with parameter
 
void  seq0neToN(int i,int n){
    if(i>n) return ;
   
    seq0neToN( i,n-1);
    cout<< n<<endl;  

}
int main(){
    int n;
    cin>> n;
    seq0neToN(1,n);
}