#include<iostream>
using namespace std;

void seqNTOOne(int n)
{
    if( n==0) return ;
    cout<< n<<endl;
    seqNTOOne(n-1);
}


int main()
{
    int n;
    cin>>n;
   seqNTOOne(n);
}

// isko int return type se  karo...