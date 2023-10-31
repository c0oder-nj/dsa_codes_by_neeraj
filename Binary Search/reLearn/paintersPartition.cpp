#include<bits/stdc++.h>
using namespace std;


int pantersCount(vector<int> arr,int mid){
    int panterCnt = 1;
    int timePaint = 0;

    for(int i=0; i<arr.size(); i++){
        if(timePaint + arr[i]<= mid){
            timePaint += arr[i];
        }else{
            panterCnt ++;
            timePaint = arr[i];
        }
    }

    return panterCnt;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    // step one find your search space
    int low = *max_element(boards.begin(),boards.end());
    int high = accumulate(boards.begin(),boards.end(),0);

    int ans;

    while(low<=high){
        int mid = low + (high-low)/2;
        int panterCnt = pantersCount(boards, mid);

        if(panterCnt == k){
            ans = mid;
            high = mid-1;
        }

        else if(panterCnt > k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }

    return ans;
}