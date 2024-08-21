#include<bits/stdc++.h>
using namespace std;

void bs( vector<int>&v){

    for(int i=0;i<v.size()-1;i++){
         for(int j=0;j<v.size()-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
         }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}

int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    bs(v);

}