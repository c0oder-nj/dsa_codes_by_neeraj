#include<bits/stdc++.h>
using namespace std;


vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	// step 1 -> create adjList
	vector<vector<int>> adjList(n+1); // no. of rows specify krna jaruri hota hai 
	for(int i=0; i<m; i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	// step 2 - bfs traversal
	vector<bool> visited(n+1);
	vector<int> parent(n+1);
	queue<int> q;

	q.push(s);
	visited[s] = true;
    parent[0] = -1;
	parent[s] = -1;

	while(!q.empty()){
		int front = q.front();
		q.pop();

		for(auto neighbour:adjList[front]){
			if(!visited[neighbour]){
				visited[neighbour] = true;
				parent[neighbour] = front;
				q.push(neighbour);
			}
		}
	}


	// prepare shortest path
	vector<int> ans;
	int currNode = t;
	ans.push_back(t);
	while(currNode!=s){
		currNode = parent[currNode];
		ans.push_back(currNode);
	}

	reverse(ans.begin(),ans.end());

	return ans;
	
}

int main(){
    int v = 3;
    int e = 3;

    // vector<pair<int,int>> edges = {
    //     {1,2},
    //     {1,3},
    //     {1,4},
    //     {2,5},
    //     {4,6},
    //     {6,7},
    //     {3,8},
    //     {4,8},
    //     {7,8}
    // };
    vector<pair<int,int>> edges = {
        {1,2},
        {2,3},
        {1,3}
    };

    int s=1;
    int d=3;

    vector<int> res = shortestPath(edges,v,e,s,d);
    for(auto ele:res){
        cout<<ele<<" ";
    }
    return 0;
}
