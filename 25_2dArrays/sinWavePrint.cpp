#include <bits/stdc++.h> 

using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    int idx = -1;
    bool flag = true;
    for(int j=0; j<mCols; j++){
        if(j%2 != 0){
            idx = 2;
            flag = false;
        }
        for(int i=0; i<nRows; i++){
            if(flag){
                cout<<arr[i][j]<<" ";
                idx = -1;
            }else{
                cout<<arr[idx][j]<<" ";
                idx--;
            }
        }

        cout<<endl;
    }
}

int main(){

    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    wavePrint(v,3,4);
    return 0;
}