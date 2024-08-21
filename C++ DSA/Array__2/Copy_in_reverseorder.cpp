#include<iostream>
#include<vector>
using namespace std;


void display(vector<int>&a){

    for(int i=0;i<a.size();i++){
        cout<< a[i] <<" " ;
    }

}

int main(){
int n;
cin>> n;

vector<int>v1;
for(int i=0;i<n;i++){
    int r;
    cin>>r;
    v1.push_back(r);
}
display(v1);
cout<< endl;

vector<int>v2;
for( int i=v1.size()-1;i>=0;i--){
    v2.push_back(v1[i]);

}
display(v2);


}


