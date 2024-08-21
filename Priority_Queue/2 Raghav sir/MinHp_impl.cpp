#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    public:
    vector<int>hp;
    void upheapify(int ci){
        while(ci>0){
            int pi=(ci-1)/2;
            if(hp[pi]>hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else break;
        }
    }
    void downheapify(int pi){
        while(pi<hp.size()){
            int lc=2*pi+1;
            int rc=2*pi+2;
            if(lc>=hp.size()) break;
            int minel=pi;
            if(hp[lc]<hp[minel]){
                minel=lc;
            }
            if(rc<hp.size() && hp[rc]<hp[minel]){
                minel=rc;
            }
            if(minel!=pi){
                swap(hp[pi],hp[minel]);
                pi=minel;
            }
            else{
                break;
            }
        }
    }
   
    void push(int val){
        hp.push_back(val);
        upheapify(hp.size()-1);
    }
    int top(){
        if(hp.size()==0) cout<<"hp is empty";
        else return hp[0];
    }
    void pop(){
        if(hp.size()==0) cout<<"hp is empty";
        else{
            swap(hp[0],hp[hp.size()-1]);
            hp.pop_back();
            downheapify(0);
        }
    }
    void display(){
        if(hp.size()==0) cout<<"heap is empty";
        else{
            cout<<"[ ";
            for(int i=0;i<hp.size();i++){
               
                cout<<hp[i]<<" ";
            }
            cout<<"]";
        }
    }



};
int main(){
    MinHeap hp;
    hp.push(10);
    hp.push(20);
    hp.push(11);
    hp.push(2);
    
    hp.display();
    hp.pop();
    cout<<endl;
    hp.display();
   
    
}