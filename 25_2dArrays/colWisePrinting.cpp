#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    // for(int j=0;j<4; j++){
    //     for(int i=0; i<3; i++){
    //         cout<<arr[i][j]<<" "; // only row value will increase e.g arr[0][0] | arr[1][0] etc
    //     }
    //     cout<<endl;
    // }

    int idx = -1;

    for(int j=0;j<4; j++){
        if(j%2!=0){
            idx = 2; // no. of rows -1
        }
        for(int i=0; i<3; i++){
            if(j%2==0){
                cout<<arr[i][j]<<" "; 
                idx = -1;
            }else{
                cout<<arr[idx][j]<<" ";
                idx--;
            }
        }
        cout<<endl;
    }
    return 0;
}