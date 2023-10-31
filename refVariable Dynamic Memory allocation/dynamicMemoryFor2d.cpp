#include<bits/stdc++.h>
using namespace std;

int main(){

    /*
    int n;
    cin>>n; // creating the matrix for size n*n

    int** arr = new int*[n]; // arr double pointer hai jo ki ek pointer array ka base address store krega
    // us pointer array ki har ek value ek pointer hogi jo ki dusre arrays ko point kregi 
    // ye ho jayega apna array inside arrays 2d arrays

    //    [ 
    //         int* --> [1,2,3]
    //         int* --> [4,5,6]
    //        int* -->  [7,8,9]
    //      ]
    //


    for(int i=0; i<n; i++){
        arr[i]= new int[n]; // here n is stands for column
        // kya ho raha hai 
        // basically arr jo mera ek double pointer tha uske pass mere ke pointer type ke array ka base address tha
        // toh us pointer array ki har ek ith index par me ek address store kr skta hu
        // so mene har ek index par ek new array ki jo ki heap me bana hua hai uska base address daal diya 
        // jisse we can print like this 
        // arr[i][j] --> means array ki ith index par jo array pada hai uski jth index ki value
        // yaha har ek ith index ke corresponding hamne n size ka array create kiya so ye matrix ban gaya 
        // n*n ka matrix
    }

    // taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // printing output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    */


    // creating m*n array using dynamic memory allocation

    int row;
    cout<<"Enter the number of rows: ";
    cin>>row;

    int col;
    cout<<"Enter the number of columns: ";
    cin>>col;

    int **arr = new int*[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // 2d matrix of size row*col is created

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // printing output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory
    for(int i=0; i<row; i++){
        delete []arr[row];
    }


    // deleting the pointer array
    delete []arr;
    return 0;
}