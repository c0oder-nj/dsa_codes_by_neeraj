#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    int arr[row][col];

    // Input values into the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Printing the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter key to search in array: ";
    cin >> key;

    cout << (isPresent(arr, key, row, col) ? "Key found!" : "Key not found!") << endl;

    return 0;
}
