#include<bits/stdc++.h>
using namespace std;
int size(vector<int>&q){
    return q.size();
}
void display(vector<int>&q){
    for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
void push(int x,vector<int>&q){
    q.push_back(x);
}
void pop(vector<int>&q){

    q.erase(q.begin());
}
int main(){
    vector<int>q;
    cout<<q.size()<<endl;
    q.erase(q.begin());
    cout<<q.size()<<endl;
    for(int i=0;i<q.size();i++){
        cout<<q[i]<<" ";
    }

    size

    

}