#include <bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
        for(int grid_j = 0;grid_j < 20;grid_j++){
            cin >> grid[grid_i][grid_j];
        }
    }
    vector <long long> maxProduct;
    for(int i = 0; i < 20; i++){
        long long product = 1;
        long long upproduct = 1;
        long long leftproduct = 1;
        long long rightproduct = 1;
        for(int j = 0; j < 20; j++){
            if(j + 3 < 20){
                product = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
                maxProduct.push_back(product);
            }
            if(i + 3 < 20){
                upproduct = grid[i][j] * grid[i+1][j] * grid[i+2][j] * grid[i+3][j];
                maxProduct.push_back(upproduct);
            }
            if(i + 3 < 20 && j + 3 < 20){
                leftproduct = grid[i][j] * grid[i+1][j+1] * grid[i+2][j+2] * grid[i+3][j+3];
                maxProduct.push_back(leftproduct);
            }
            if(i - 2 > 0 && j + 3 < 20){
                rightproduct = grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3];
                maxProduct.push_back(rightproduct);
            }
        }

    }
    cout << *max_element(maxProduct.begin(), maxProduct.end()) << endl;
    return 0;
}
