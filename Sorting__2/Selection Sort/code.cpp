#include<bits/stdc++.h>
using namespace std;

void ss(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindex=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindex=j;
            }
        }
        swap(v[i],v[mindex]);
       
    }

}

int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    ss(v);
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

}