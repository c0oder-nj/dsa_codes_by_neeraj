#include <bits/stdc++.h> 
using namespace std;

void tSort(int startNode,vector<vector<int>> adjList,vector<bool> &visited,stack<int> &s){
    visited[startNode] = true;

    for(auto neighbour:adjList[startNode]){
        if(!visited[neighbour]){
            tSort(neighbour, adjList, visited, s);
        }
    }

    s.push(startNode);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // step 1 create adjacency list
    // unordered_map<int,list<int>> adjList;
    vector<vector<int>> adjList(v);
    for(int i=0; i<e; i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adjList[u].push_back(v);
    }

    // user defined ds that needs in solution
    vector<bool> visited(v);
    stack<int> s;

    // now traverse each node for topological sort
    for(int i=0; i<v; i++){
        if(!visited[i]){
            tSort(i,adjList,visited,s);
        }
    }

    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}