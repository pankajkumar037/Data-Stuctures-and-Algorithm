#include<iostream>
using namespace std;

int FibSeqUpTo(int n)
{
    if(n==1 || n==2) return 1;
    return FibSeqUpTo(n-1) + FibSeqUpTo(n-2);

}

int main(){
    int n;
    cin>>n;
    cout<<FibSeqUpTo(n);
}