
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// compaarator in sorting
/*
bool compare(int a,int b){
    return(a>b);
}
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(2);
    v.push_back(9);
    v.push_back(1);

    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
*/
class student{
    string name;
    int marks;
    int roll;
    student( string s,int m,int r ){
        this->name=s;
        this->marks=m;
        this->roll=r;
    }
};
bool compare(student a,student b){
    // if(a.marks==b.marks){
    //     return a>b;

    // }
    // reurn a<b;
   
}
