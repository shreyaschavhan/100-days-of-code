#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        int r, c;
        cin >> r >> c;
        int mat[r][c];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> mat[i][j];
            }
        }
        int count = 0;
        for(int i = 0; i < r; i++){
            int row_sum = 0;
            int col_sum = 0;
            for(int j = 0; j < c; j++){
                row_sum += mat[i][j];
                col_sum += mat[j][i];
            }
            cout << row_sum << endl << col_sum << endl;
            if(row_sum == col_sum){
                count++;
            }
        }
        if(count >= 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
	return 0;
}
