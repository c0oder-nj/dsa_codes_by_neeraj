#include<bits/stdc++.h>
using namespace std;

int countTotalSteps(int n){
    if(n<0){ // stairs doesn't exists
        return 0;
    }
    if(n == 0){
        return 1;
    }

    return countTotalSteps(n-1) + countTotalSteps(n-2);
}

int main(){

    cout<<countTotalSteps(5)<<endl;
    
    return 0;
}