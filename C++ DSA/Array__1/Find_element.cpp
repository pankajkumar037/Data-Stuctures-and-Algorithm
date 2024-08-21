#include<iostream>
using namespace std;
int main()
{
    int x;
    int arr[5];
    for(int i=0;i<5;i++){

        cin>>arr[i];
    }
    cout<<"element to search";
    cin>>x;
    bool flag=false;
    for(int i=0;i<5;i++){
        if(x==arr[i]) flag=true;

    }
      if (flag==true) cout<< "yes";
      else cout<< "false";
  

}