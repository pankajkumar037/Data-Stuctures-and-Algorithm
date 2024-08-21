#include<bits/stdc++.h>
using namespace std;

vector< list<int>> graph;
unordered_set<int>visited; // visited set 
int v; // num of vertices
void add_edge(int src,int dst,bool bi_dir=true){
    graph[src].push_back(dst);
    if(bi_dir==true){
        graph[dst].push_back(src);
    }
}

bool DFS(int curr,int end){
    if(curr==end ) return true;

    visited.insert(curr);// mark visited
    for(auto neighbour: graph[curr]){
        if(not visited.count(neighbour)){ // means if count is 0
            bool result=DFS(neighbour,end);
            if(result==true) return true;
        }
    }
    return false;
}

bool any_path(int src,int dst){
    return DFS(src,dst);
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
    int x,y;
    cin>>x>>y;
    cout<<any_path(x,y)<<endl;

}