#include<bits/stdc++.h>
// go check onlien solution of mine on leetcode
using namespace std;

vector<int> spiralPrint(vector<vector<int>> v){

    // for understanding --> {{1,2,3},{4,5,6},{7,8,9}}
    int rows = v.size(); // vector ki size means mere vector ke andr or kitne vectors hai that is my no. of rows
    int cols = v[0].size(); // vector ke andr jo mutiple vectors hai unme se kisi bhi ek ki size is my no. of columns

    int total = rows*cols;

    int cnt = 0;

    // index intialization
    int firstRow = 0;
    int lastRow = rows - 1; // no. of rows -1

    int firstCol = 0;
    int lastCol = cols - 1;

    vector<int> ans; // vector to be returned


    while(cnt<total){ // why not <= since cnt mera total number of elements ke barabar ho gaya toh bhi loop chal jayega jisse vo total elements se jayda baar chal jayega

    // approach for spiral printing
    // first print firstRow
    // then last col
    // then last row
    // then first col

    /*
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }
    */
    // printing first row --> row fixed hoti hai column vary hota hai 
    for(int j=firstCol; j<=lastCol; j++){
        ans.push_back(v[firstRow][j]);
        cnt++;
    }
    firstRow ++; // since I print firstRow so I moved to next row so that elements would not repeat in printing


    // printing last colums --> column fixed hota hai row vary hoti hai
    for(int i=firstRow; i<=lastRow; i++){
        ans.push_back(v[i][lastCol]);
        cnt++;
    }
    lastCol--; // since last col print kr diya toh second last pr chale jao so elements repeat na ho


    // printing last row
    for(int j=lastCol; j>=firstCol; j--){
        ans.push_back(v[lastRow][j]);
        cnt++;
    }
    lastRow -- ;


    // printing first column bottom to top
    for(int i=lastRow; i>=firstRow; i--){
        ans.push_back(v[i][firstCol]);
        cnt++;
    }


    }

    return ans;
}

int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the number of Columns: ";
    cin>>col;

    vector<vector<int>> v;

    int val;

    vector<int> temp;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }

    vector<int> ans = spiralPrint(v);

    for(auto ele:ans){
        cout<<ele<<" ";
    }
    return 0;
}