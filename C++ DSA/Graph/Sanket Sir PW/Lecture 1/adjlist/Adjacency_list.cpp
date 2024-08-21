#include<bits/stdc++.h>
using namespace std;

vector< list<int>> graph;
int v; // num of vertices
void add_edge(int src,int dst,bool bi_dir=true){
    graph[src].push_back(dst);
    if(bi_dir==true){
        graph[dst].push_back(src);
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<el<<", ";
        }
        cout<<endl;
    }
}


int main(){
    cin>>v; // numof vertices
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    display();

}