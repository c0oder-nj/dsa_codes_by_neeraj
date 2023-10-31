#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
        // adjacency list
        unordered_map<int,list<pair<int,int>>> adjList;

        void addEdge(int u,int v,int weight){
            pair<int,int> p = {v,weight};
            adjList[u].push_back(p);
        }

        void printAdjList(){
            for(auto i:adjList){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<"("<<j.first<<","<<j.second<<")";
                }
                cout<<endl;
            }
        }

        void dfs(int startNode,vector<bool> &visited,stack<int> &topo){
            visited[startNode] = true;
            for(auto neighbour:adjList[startNode]){
                if(!visited[neighbour.first]){
                    dfs(neighbour.first,visited,topo);
                }
            }
            topo.push(startNode);
        }

        void getShortestPath(int src,vector<int> &distance,stack<int> topo){
            distance[src] = 0;

            while(!topo.empty()){
                int top = topo.top();
                topo.pop();

                if(distance[top]<INT_MAX){
                    // adjLIst ki distance update krni hai
                    for(auto i:adjList[top]){
                        if(distance[top] + i.second < distance[i.first]){
                            distance[i.first] = distance[top] + i.second;
                        }
                    }
                }
            }
        }
};

int main(){

    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.printAdjList();

    int n=6;
    vector<bool> visited(n);
    stack<int> s;
    // do topological sort
    for(int i=0; i<n; i++){
        if(!visited[i]){
            g.dfs(i,visited,s);
        }
    }

    int src = 1;
    vector<int> distance(n);
    for(int i=0; i<n; i++){
        distance[i] = INT_MAX;
    }

    

    g.getShortestPath(src,distance,s);

    for(auto ele:distance){
        cout<<ele<<" ";
    }
    cout<<endl;
    


    return 0;
}