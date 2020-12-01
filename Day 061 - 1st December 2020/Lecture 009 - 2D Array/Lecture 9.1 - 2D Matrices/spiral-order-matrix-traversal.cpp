/*
Spiral - Order Matrix Traversal
Problem -
We have to print the given 2D matrix in the spiral order.
Spiral Order means that firstly, first row is printed, theen
last column is printed, then last row is printed and then
first coulumn is printed, then we will come inwards in the simialr way.

Algorithm - [We are given 2D matrix of n x m].
1. We will need 4 variables:
    a. row_start - initialized with 0.
    b. row_end - initialized with n - 1.
    c. column_start - initialized with 0.
    d. column_end - initialized with m - 1.
2. fisrt of all, we will traverse in the row_start from column_start
to column_end and we will increase the row_start with 1 as
we have traversed the starting row.
3. Then we will traverse in the coulumn column_end from row_start
to row_end and decrease the coulumn_end by 1.
4. Then we will traverse in the row row_end from column_end
to column_start and decrease the row_end by 1.
5. Then we will traverse in the column coulumn_start from row_end to row_start and increase the coulumn_start by 1.
6. We will do the above steps from 2 to 5 until row_start <=
row_end and coulumn_start <= column_end.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    // Taking input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    // Printing Output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Spiral Order Traversal
    int row_start = 0;
    int row_end = row - 1;
    int column_start = 0;
    int column_end = col - 1;
    while(row_start <= row_end && column_start <= column_end){
        // For row starting
        for(int col = column_start; col <= column_end; col++)
            cout << arr[row_start][col] << " ";

        row_start++;

        // for column_end
        for(int row = row_start; row <= row_end; row++)
            cout << arr[row][column_end] << " ";
        column_end--;

        // for row_end
        for(int col = column_end; col >= column_start; col--)
            cout << arr[row_end][col] << " ";
        row_end--;

        // for column_start
        for(int row = row_end; row >= row_start; row--)
            cout << arr[row][column_start] << " ";
        column_start++;
    }
    return 0;
}
