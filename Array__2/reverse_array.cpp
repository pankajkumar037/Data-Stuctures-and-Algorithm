


                // try again

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
  vector<int>v;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        v.push_back(r);
    }
    for(int i=0;i<n;i++) {
        cout<< v[i]<<" ";
    }

    cout<< endl;
    
    int i=0;
    int j=v.size()-1;

    while(j>i || i=j){

        int temp=v[i];
        v[i]=v[j];
        v[j] = temp;

    }
    for(int i=0;i<n;i++) {
        cout<< v[i]<<" ";
    }

}