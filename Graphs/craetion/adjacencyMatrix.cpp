#include<bits/stdc++.h>
using namespace std;

class Graph{
    int n;
    int **matrix;
        public:

        Graph(int node){
            n = node;

            // matrix initialization
            matrix = new int*[n];
            for(int i=0; i<n; i++){
                matrix[i] = new int[n];
            }
        }

        void takInput(){
            cout<<"Enter total "<<n*n<<" elements that shows graph data"<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cin>>matrix[i][j]; // means ith node ki jth node ke saath koi edge hai ya nahi hai 
                    // 1 -> means ki edge hai 
                    // 0 -> means ki koi edge nahi hai 
                }
            }
        }

        void printGraph(){
            // if any edge is having from node i to j then I print both the nodes
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(matrix[i][j] == 1){ // means ith node se jth node tak edge hai so in that case print both the nodes
                        cout<<i<<"->"<<j<<" "<<j<<"->"<<i<<endl;
                    }
                }
            }
        }
};

int main(){

    int nodes;
    cout<<"Enter the number of nodes ";
    cin>>nodes;

    Graph* g = new Graph(nodes);
    g->takInput();
    
    g->printGraph();
    return 0;
}