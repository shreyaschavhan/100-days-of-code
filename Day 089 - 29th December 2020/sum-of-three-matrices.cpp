#include <bits/stdc++.h>


/*
Algorithm -

Step 1 : Start
Step 2 : Declare 4 matrices - mat1[row][col], mat2[row][col], mat3[row][col], add1[row][col], add2[row][col]
Step 3 : read input for row, col, mat1[][], mat2[][], mat3[][]
Step 4 :
do
for i = 0 to i < r:
	for j = 0 to j < c:
		add1[i][j] = mat1[i][j] + mat2[i][j]
Step 5 :
for i = 0 to i < r:
	for j = 0 to j < c:
		add2[i][j] = add1[i][j] + mat3[i][j]

Step 6 : Add2 is the required matrix
Step 7 : stop

 
*/
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int a[row][col], b[row][col], c[row][col], add[row][col], final[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> a[row][col];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> b[row][col];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> c[row][col];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            final[i][j] = add[i][j] + c[i][j];
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << final[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
