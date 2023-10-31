#include<bits/stdc++.h>
using namespace std;

void prepareAdjList(unordered_map<int,list<int>> &adjList,vector<vector<int>> edges,int nodes){
    // preparing adjList representation of graph
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        // since it is directed graph
        adjList[u].push_back(v);
    }
    // adjacency list created
}

void bfs(unordered_map<int,list<int>> adjList,unordered_map<int,bool> visited,vector<int> &ans,int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int fNode = q.front();
        q.pop();
        ans.push_back(fNode);

        // traverse all neighbours of that front Node
        for(auto i:adjList[fNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    // adjancecny list method
    unordered_map<int,list<int>> adjList;
    
    // data structure that checks for visited graphs
    unordered_map<int,bool> visited;
    vector<int> ans;
    prepareAdjList(adjList,adj,n);

    // traverse all componenets of graph 
    // for(int i=0; i<n; i++){
    //     if(!visited[i]){
    //         bfs(adjList,visited,ans,i); // adjLIst ds, visited ds, ans that returns, starting node
    //     }
    // }

    bfs(adjList,visited,ans,0);
    for(auto i:adjList){
        cout<<i.first<<"-> ";
        for(auto j:i.second){
            cout<<j<<", ";
        }
        cout<<endl;
    }

    return ans;
}

int main(){
    vector<vector<int>> edges = {{0,1},{0,2},{0,3},{1,4},{1,7},{2,5},{3,6}};
    int n = 8;
    vector<int> bfsAns = bfsTraversal(n,edges);
    cout<<endl<<endl;
    for(auto eleOfbfs:bfsAns){
        cout<<eleOfbfs<<" ";
    }
    return 0;
}