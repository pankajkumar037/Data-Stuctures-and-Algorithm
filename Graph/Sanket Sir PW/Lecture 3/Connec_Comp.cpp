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
void dfs(int node,unordered_set<int>&visited){
    visited.insert(node);
    for(auto neighbour:graph[node]){
        if(not visited.count(neighbour)){
            dfs(neighbour,visited);
        }
    }

}

int connected_comp(){
    int result=0;
    unordered_set<int>visited;
    for(int i=0;i<v;i++){
        if(visited.count(i)==0){
            result++;
            dfs(i,visited);
        }
    }
    return result;
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
    cout<< connected_comp()<<endl;
    

}
/*
7  
8
0 3
1 3
3 4
1 4
2 5
5 6
2 6
0 1
*/