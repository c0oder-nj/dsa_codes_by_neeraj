#include<bits/stdc++.h>
using namespace std;

class graph{
    // creation of map
    // map<int,list<int>> graph;
    // graph[key] -> show the node and 
    // the value of graph[key] -> is a list of connected or adjacent nodes with that node
    public:
    
    unordered_map<int,list<int>> adjGraph;

    void addEdge(int u,int v,int weight){
        // weight 0 -> means undirected graph
        // weight 1 -> means directed graph

        // adding edge to node u to v
        adjGraph[u].push_back(v);

        // now if it is undirected graph then only we can create an edge from v to u
        if(!weight){
            adjGraph[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto tupple:adjGraph){
            cout<<tupple.first<<" -> ";
            for(auto l:tupple.second){
                cout<<l<<", ";
            }
            cout<<endl;
        }
    }

};

int main(){
    
    int nodes;
    cout<<"Enter the number of nodes: ";
    cin>>nodes;

    int edges;
    cout<<"Enter the number of edges: ";
    cin>>edges;

    graph g;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;
        // creating an undirected graph
        g.addEdge(u,v,0);
        
        // printing graph
    }
        g.printAdjList();
    return 0;
}