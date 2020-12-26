// Key Note - There are more diagonals to a matrix than you think

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



// Trail 4 - 5 passed out of 6
// Failed -  #5
/*
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
                upproduct = grid[j][i] * grid[j+1][i] * grid[j+2][i] * grid[j+3][i];
                maxProduct.push_back(product);
                maxProduct.push_back(upproduct);
            }
            if(i + 3 < 20 && j + 3 < 20){
                leftproduct = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
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

*/

// Trail 3 - 4 passed out of 6
// Failed - #4 #5
/*
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
                upproduct = grid[j][i] * grid[j+1][i] * grid[j+2][i] * grid[j+3][i];
                maxProduct.push_back(product);
                maxProduct.push_back(upproduct);
            }
            if(i + 3 < 20 && j + 3 < 20){
                leftproduct = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
                maxProduct.push_back(leftproduct);
            }
            if(i - 3 > 0 && j + 3 < 20){
                rightproduct = grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3];
                maxProduct.push_back(rightproduct);
            }
        }

    }
    cout << *max_element(maxProduct.begin(), maxProduct.end()) << endl;
    return 0;
}

*/

// Trail 2 - Failed everything
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
        for(int grid_j = 0;grid_j < 20;grid_j++){
            cin >> grid[grid_i][grid_j];
        }
    }
    long long leftDiagonal = INT_MIN;
    long long rightDiagonal = INT_MIN;
    long long lrmaxProduct = INT_MIN;
    long long upmaxProduct = INT_MIN;
    for(int i = 0; i < 20; i++){
        long long product = 1;
        long long upproduct = 1;
        long long leftproduct = 1;
        long long rightproduct = 1;
        for(int j = 0; j < 20; j++){
            if(j + 3 < 20){
                product = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
                upproduct = grid[j][i] * grid[j+1][i] * grid[j+2][i] * grid[j+3][i];
            }
            if(i + 3 < 20 && j + 3 < 20){
                leftproduct = grid[i][j] * grid[i][j+1] * grid[i][j+2] * grid[i][j+3];
            }
            if(i - 3 > 0 && j + 3 < 20){
                rightproduct = grid[i][j] * grid[i-1][j+1] * grid[i-2][j+2] * grid[i-3][j+3];

            }
        }
        upmaxProduct = max(upmaxProduct, upproduct);
        lrmaxProduct = max(lrmaxProduct, product);
        leftDiagonal = max(leftDiagonal, leftproduct);
        rightDiagonal = max(rightDiagonal, rightproduct);
    }

    long long diagonalMax = max(leftDiagonal, rightDiagonal);
    long long maxProduct = max(upmaxProduct, lrmaxProduct);
    cout << max(diagonalMax, maxProduct) << endl;
    return 0;
}

*/


// Trial - 1 - All failed except the first case
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
        for(int grid_j = 0;grid_j < 20;grid_j++){
            cin >> grid[grid_i][grid_j];
        }
    }
    int leftDiagonal = INT_MIN;
    int rightDiagonal = INT_MIN;
    int lrmaxProduct = INT_MIN;
    int upmaxProduct = INT_MIN;
    for(int i = 0; i < 20; i++){
        int count = 0;
        int product = 1;
        int upproduct = 1;
        int leftproduct = 1;
        int rightproduct = 1;
        for(int j = i; j < 20; j++){
            product *= grid[i][j];
            upproduct *= grid[j][i];
            if(i == j){
                leftproduct *= grid[i][j];
            }
            if(i == 20 - j - 1){
                rightproduct *= grid[i][j];
            }
            count++;
            if(count == 4){
                break;
            }
        }
        upmaxProduct = max(upmaxProduct, upproduct);
        lrmaxProduct = max(lrmaxProduct, product);
        leftDiagonal = max(leftDiagonal, leftproduct);
        rightDiagonal = max(rightDiagonal, rightproduct);
    }

    int diagonalMax = max(leftDiagonal, rightDiagonal);
    int maxProduct = max(upmaxProduct, lrmaxProduct);
    cout << max(diagonalMax, maxProduct) << endl;
    return 0;
}
*/
