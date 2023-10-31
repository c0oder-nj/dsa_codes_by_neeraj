#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    
        bool isSafe(int k,int l,int n,vector<vector<int>> &m,vector<vector<int>> visited){
            if(((k>=0 && k<n) && (l>=0 && l<n)) && m[k][l] == 1 && visited[k][l] == 0){
                return true;
            }else{
                return false;
            }
        }    
        
        void solve(vector<vector<int>> &m,int n,int x,int y,vector<vector<int>> visitedArray,string path,vector<string>& ans){
            // base case 
            // You reached the destination
            if(x == (n-1) && y== (n-1)){
                ans.push_back(path);
                return;
            }
            
            // ab aapke rat ne chalna chalu kra toh aap jaha bhi ho pehle toh vo visited mark ho jayega
            visitedArray[x][y] = 1;
            
            // 4 cases we have
            // down | left | right | up
            
            // In case of down ---> down jaane par x badh raha tha y same tha
            int newX = x+1;
            int newY = y;
            
            if(isSafe(newX,newY,n,m,visitedArray)){
                path.push_back('D');
                // recursive function calls for down path
                solve(m,n,newX,newY,visitedArray,path,ans);
                // when function calling returns in the case of backtracking we need to remove path since for next path it will be problem because we need to get every possible paths
                path.pop_back();
            }
            
            
            
            // In case of left ---> left jaane par x same raha tha y decrement ho raha tha
            newX = x;
            newY = y-1;
            
            if(isSafe(newX,newY,n,m,visitedArray)){
                path.push_back('L');
                // recursive function calls for down path
                solve(m,n,newX,newY,visitedArray,path,ans);
                // when function calling returns in the case of backtracking we need to remove path since for next path it will be problem because we need to get every possible paths
                path.pop_back();
            }
            
            
            
            // In case of right ---> right jaane par x same raha tha y badh raha tha
            newX = x;
            newY = y+1;
            
            if(isSafe(newX,newY,n,m,visitedArray)){
                path.push_back('R');
                // recursive function calls for down path
                solve(m,n,newX,newY,visitedArray,path,ans);
                // when function calling returns in the case of backtracking we need to remove path since for next path it will be problem because we need to get every possible paths
                path.pop_back();
            }
            
            
            
            // In case of Up ---> up jaane par x kam ho raha tha y same tha
            newX = x-1;
            newY = y;
            
            if(isSafe(newX,newY,n,m,visitedArray)){
                path.push_back('U');
                // recursive function calls for down path
                solve(m,n,newX,newY,visitedArray,path,ans);
                // when function calling returns in the case of backtracking we need to remove path since for next path it will be problem because we need to get every possible paths
                path.pop_back();
            }
            
            

            // in case of backtracking visited ko 0 krna padega naye wale paths ke liye
            visitedArray[x][y] = 0;
        }
        
        
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        
        // if my source is on m[0][0]
        if(m[0][0] == 0){
            return ans;
        }
        
        // making of visited array and intialize it with zero
        vector<vector<int>> visited = m;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                visited[i][j] = 0;
            }
        }
        
        // source co-ordinate
        int srcx = 0;
        int srcy = 0;
        
        string path = "";
        
        solve(m,n,srcx,srcy,visited,path,ans);
        
        // sorting in lexicographical order
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    Solution *s = new Solution; // dynamically allocating an object of class solution
    vector<vector<int>> matrix={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n=4;

    vector<string> output = s->findPath(matrix,n);
    cout<<endl<<endl<<output.size()<<endl<<endl;
    for(auto ele:output){
        cout<<ele<<" ";
    }

    return 0;
}