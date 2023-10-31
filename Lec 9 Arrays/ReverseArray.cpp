#include <bits/stdc++.h>
using namespace std;

// void swap_arr(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

void swap_arr(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

// void reverseArray(int *arr, int size)
// {

//     int i = 0;
//     int j = size - 1;
//     // if (size % 2 == 0)
//     // {
//     //     for (; i < (size / 2) && j >= (size / 2); i++, j--)
//     //     {
//     //         swap_arr(arr, i, j);
//     //     }
//     // }
//     // else
//     // {
//     //     for (; i < (size / 2) && j > (size / 2); i++, j--)
//     //     {
//     //         swap_arr(arr, i, j);
//     //     }
//     // }

//     while(i<=j){
//         swap_arr(arr,i++,j--);
//     }
// }


void reverseArray(int *arr,int size){
    // reversing the array using two pointers approach
    int start = 0;
    int end = size-1;

    while(start<end){ // why not <= since even odd dono ke case me less than same perfrom krega 
    // kyuki odd ke case me centre value swap krne ki jarurat nahi 
    // even ke case me start or end dono ko same place par aane ki jarurat nahi 

    swap(arr[start++],arr[end--]);

    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, size);
    printArray(arr, size);
    return 0;
}