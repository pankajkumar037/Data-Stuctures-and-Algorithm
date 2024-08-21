#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
}

}
void reversepart(int a,int b,vector<int>&v){
    int i=a;
    int j=b;
    while(j>=i){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;

        i++;
        j--;
    }
}

int main()
{

vector<int>v;
v.push_back(6);
v.push_back(2);
v.push_back(7);
v.push_back(8);
v.push_back(9);

display(v);
cout<< endl;

reversepart(0,2,v);
reversepart(3,4,v);
reversepart(0,4,v);
display(v);



}