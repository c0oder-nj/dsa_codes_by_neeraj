#include<bits/stdc++.h>
using namespace std;


bool isPresent(int **arr, int key,int rows,int colums){
    for(int i=0; i<rows; i++){
        for(int j=0; j<colums; j++){
            if(arr[i][j] == key){
                cout<<arr[i][j]<<" ";
                return true;
                break;
            }
            cout<<endl;
        }
    }
    return false;
}

int main(){
    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the number of columns: ";
    cin>>col;

    int arr[row][col];

    // intialization at the time of declartion
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // row wise input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // column wise input
    // means col value constant rkhni hai for differete rows so me har ek column value ke liye inner loop ko row times chala dunga jisse har ek har ek row value ke corresponding ekk const column value hogi for an iteration
    // for eg.
    // the below example is for row = 3 and col = 4
    // jab j=0 hoga tab i=0,1,2 that is 
    // arr[0][0] | arr[1][0] | arr[2][0]  when j = 0
    // arr[0][1] | arr[1][1] | arr[2][1]  when j = 1
    // arr[0][2] | arr[1][2] | arr[2][2]  when j = 2
    // arr[0][3] | arr[1][3] | arr[2][3]  when j = 3

    // for(int j=0; j<col; j++){ // loop for columns
    //     for(int i=0; i<row; i++){ // loop for rows 
    //         cin>>arr[i][j];
    //     }
    // }


    // printing matrix

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;
    cout<<"Enter key to search in array: ";
    cin>>key;

    int *pointerArray[row];

    int idx = 0;

    int idx2 = row;
    while(idx2--){
        pointerArray[idx] = (int*)(arr+idx);
        idx++;
    }


    cout<<isPresent(pointerArray,key,row,col)<<endl;
    return 0;
}