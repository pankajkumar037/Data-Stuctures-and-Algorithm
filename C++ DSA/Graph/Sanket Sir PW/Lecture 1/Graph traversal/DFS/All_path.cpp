#include<bits/stdc++.h>
using namespace std;

vector< list<int>> graph;
unordered_set<int>visited; // visited set 
vector<vector<int>>result;
int v; // num of vertices
void add_edge(int src,int dst,bool bi_dir=true){
    graph[src].push_back(dst);
    if(bi_dir==true){
        graph[dst].push_back(src);
    }
}

void DFS(int curr,int end,vector<int>&path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);// mark visited
    path.push_back(curr);
    for(auto neighbour: graph[curr]){
        if(not visited.count(neighbour)){ // means if count is 0
           DFS(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void All_path(int src,int dst){
    vector<int>v;
    DFS(src,dst,v);
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
    All_path(x,y);

    for(auto path:result){
        for(auto el:path){
            cout<<el<<" ";

        }
        cout<<endl;
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
*/