#include<iostream>
using namespace std;
int main()
{
  
int arr[6]={2,5,3,8,9,1};

int x;
cin>>x;

int count=0;
for(int i=0;i<6;i++){
    if(arr[i]>x) count++ ;

}
cout<<count;
  
    

    
  

}