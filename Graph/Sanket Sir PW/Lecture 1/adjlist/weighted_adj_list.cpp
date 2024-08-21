#include<bits/stdc++.h>
using namespace std;

vector< list <pair<int,int>>> graph;
int v; // num of vertices
void add_edge(int src,int dst,int wt,bool bi_dir=true){
    graph[src].push_back({dst,wt});
    if(bi_dir==true){
        graph[dst].push_back({src,wt});
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<"("<<el.first<<" "<<el.second<<") ,";
        }
        cout<<endl;
    }
}


int main(){
    cin>>v; // numof vertices
    graph.resize(v,list<pair<int,int>>());
    int e;
    cin>>e;
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();

}