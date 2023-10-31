#include<bits/stdc++.h>

void bfs(vector<vector<int>> &adj,unordered_map<int,bool> visited,vector<int> &ans,int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int fNode = q.front();
        q.pop();
        ans.push_back(fNode);

        // traverse all neighbours of that front Node
        
        for(int i=0; i<adj[fNode].size(); i++){
            if(!visited[adj[fNode][i]]){
                q.push(adj[fNode][i]);
                visited[adj[fNode][i]] = true;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    
    // data structure that checks for visited graphs
    unordered_map<int,bool> visited;
    vector<int> ans;

    // traverse all componenets of graph 
    bfs(adj,visited,ans,0); // adjLIst ds, visited ds, ans, starting node

   

    return ans;
}