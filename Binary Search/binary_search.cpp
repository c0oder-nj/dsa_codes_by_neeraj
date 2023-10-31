#include <bits/stdc++.h>
using namespace std;

void binarySearch(int *arr, int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (key == arr[mid])
        {
            cout << "Your element is present at location " << mid + 1 << endl;
            return;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}

int main()
{
    // in binary search elements should be in monotonic(increasing) order
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    binarySearch(arr, n, key);

    return 0;
}