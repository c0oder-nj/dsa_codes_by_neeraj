#include <bits/stdc++.h> 
using namespace std;


void bfsTsort(int startNode,vector<vector<int>> adjList,vector<int> &ans,vector<int> &inDegree,vector<bool> &visited){
    queue<int> q;
    q.push(startNode);
    
    while(!q.empty()){
        // logic to find topological sort
        int fNode = q.front();
        q.pop();
        ans.push_back(fNode);
        visited[fNode] = true;

        // decrease indegree of frontNode neighbours
        for(auto neighbour:adjList[fNode]){
            inDegree[neighbour]--;
            if(inDegree[neighbour] == 0){
                
                q.push(neighbour);
            }
        }
    }
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Topological Sort using Kahn's Algorithm

    // step 1 -> create adjList
    vector<vector<int>> adjList(v);
    for(int i=0; i<e; i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adjList[u].push_back(v);
    }

    for(int i=0;i<v; i++){
        cout<<i<<" -> ";
        for(auto j:adjList[i]){
            cout<<j<<", ";
        }
        cout<<endl;
    }


    cout<<endl<<endl;
   
    // step 2 -> find indegree of all Nodes
    vector<int> inDegree(v,0);
    for(int i=0; i<adjList.size(); i++){
        for(auto ele:adjList[i]){
            inDegree[ele]++;
        }
    }

     for(int i=0; i<v; i++){
        cout<<"InDegree of node "<<i<<" is "<<inDegree[i]<<endl;
    }

    cout<<endl<<endl;


    // step 3 -> do bfs traversal with some updated logic
    vector<bool> visited(v);
    vector<int> ans; // ans array to store topological sort
    for(int i=0; i<v; i++){
        if(inDegree[i] == 0 && !visited[i]){
            bfsTsort(i,adjList,ans,inDegree,visited);
        }
    }
    return ans;
}


int main(){
    int v=6;
    int e=10;
    // vector<vector<int>> edges = {{0,1},{0,2}};
    // vector<vector<int>> edges = {{0,1},{0,3},{1,2},{3,2}};
    vector<vector<int>> edges = {
        {1,3},
        {5,4},
        {5,3},
        {2,4},
        {2,3},
        {2,0},
        {1,0},
        {0,4},
        {4,3},
        {1,5}
    };
    vector<int> res = topologicalSort(edges,v,e);

    cout<<endl;
    for(auto ele:res){
        cout<<ele<<" ";
    }

    // vector<vector<int>> adjList(v);
    // for(int i=0; i<edges.size(); i++){
    //     int u=edges[i][0];
    //     int v=edges[i][1];
    //     cout<<u<<" "<<v<<endl;
    //     adjList[u].push_back(v);
    // }


    return 0;
}