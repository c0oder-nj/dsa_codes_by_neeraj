#include <bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int low, int high, int key)
{

    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            binarySearch(arr, low, (mid - 1), key);
        }
        else
        {
            binarySearch(arr, (mid + 1), high, key);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr,0,n-1,key);
    return 0;
}