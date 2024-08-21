#include<bits/stdc++.h>
using namespace std;

vector< list<int>> graph;
unordered_set<int>visited; // visited set 
int v; // num of vertices
void add_edge(int src,int dst,bool bi_dir=true){ //graph formation
    graph[src].push_back(dst);
    if(bi_dir==true){
        graph[dst].push_back(src);
    }
}

void BFS(int src,int dst,vector<int>&dist){
    queue<int>q;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0; // source to source distance is 0
    visited.insert(src);
    q.push(src);
    while(not q.empty()){
        int curr=q.front();
        q.pop();
        for(auto neighbour:graph[curr]){
            if(not visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=1+dist[curr];
            }
        }
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
    int x,y;
    cin>>x>>y;
    
    vector<int>dist;
    BFS(x,y,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    

}
/*
7 
8
0 1
0 4
4 3
1 3
1 5
5 6
5 2
2 6
0 6
*/