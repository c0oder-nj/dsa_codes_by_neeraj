#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map<int,list<int>> &adjList,vector<vector<int>> edges){
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        // since it is undirected graph
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void dfs(unordered_map<int,list<int>> adjList,vector<int> &temp, unordered_map<int,bool> &visited,int startNode){
    
    temp.push_back(startNode);
    visited[startNode] = true;
    // recursive call for all adjacent nodes
    for(auto ele:adjList[startNode]){
        if(!visited[ele]){
            dfs(adjList,temp,visited,ele);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // step 1 -> since edges are given needs to prepare adjacency list
    unordered_map<int,list<int>> adjList;
    prepareAdjList(adjList,edges);

    // visted data structur
    unordered_map<int,bool> visited;

    vector<vector<int>> ans;
    // step 2-> traverse for all vertices since it is the case of disconnected graph

    for(int i=0; i<V; i++){
        if(!visited[i]){
            vector<int> temp;
            dfs(adjList,temp,visited,i);
            ans.push_back(temp);
        }
    }

    return ans;
}