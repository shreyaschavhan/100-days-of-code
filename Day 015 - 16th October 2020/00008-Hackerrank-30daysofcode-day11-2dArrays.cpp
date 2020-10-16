#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    // long int sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9, sum10, sum11, sum12, sum13, sum14, sum15, sum16;
    // // j = 1, 2, 3
    // // i from 1 - 3
    // sum1 = arr[0][0] + arr[1][0] + arr[2][0] + arr[1][1] + arr[0][2] + arr[1][2] + arr[2][2];
    // // i from 1 - 3
    // sum2 = arr[1][0] + arr[2][0] + arr[3][0] + arr[2][1] + arr[1][2] + arr[2][2] + arr[3][2];
    // // i from 2 - 4
    // sum3 = arr[2][0] + arr[3][0] + arr[4][0] + arr[3][1] + arr[2][2] + arr[3][2] + arr[4][2];
    // // i from 3 - 5
    // sum4 = arr[3][0] + arr[4][0] + arr[5][0] + arr[4][1] + arr[3][2] + arr[4][2] + arr[5][2];
    // /***************************************************************************************/
    // // j = 1, 2, 3
    // // i from 0 - 2
    // sum5 = arr[0][1] + arr[1][1] + arr[2][1] + arr[1][2] + arr[0][3] + arr[1][3] + arr[2][3];
    // // i from 1 - 3
    // sum6 = arr[1][1] + arr[2][1] + arr[3][1] + arr[2][2] + arr[1][3] + arr[2][3] + arr[3][3];
    // // i from 2 - 4
    // sum7 = arr[2][1] + arr[3][1] + arr[4][1] + arr[3][2] + arr[2][3] + arr[3][3] + arr[4][3];
    // // i from 3 - 5
    // sum8 = arr[3][1] + arr[4][1] + arr[5][1] + arr[4][2] + arr[3][3] + arr[4][3] + arr[5][3];
    // /***************************************************************************************/

    // // j = 2, 3, 4
    // // i from 0 - 2
    // sum9 = arr[0][2] + arr[1][2] + arr[2][2] + arr[1][3] + arr[0][4] + arr[1][4] + arr[2][4];
    // // i from 1 - 3
    // sum10 = arr[1][2] + arr[2][2] + arr[3][2] + arr[2][3] + arr[1][4] + arr[2][4] + arr[3][4];
    // // i from 2 - 4
    // sum11 = arr[2][2] + arr[3][2] + arr[4][2] + arr[3][3] + arr[2][4] + arr[3][4] + arr[4][4];
    // // i from 3 - 5
    // sum12 = arr[3][2] + arr[4][2] + arr[5][2] + arr[4][3] + arr[3][4] + arr[4][4] + arr[5][4];
    // /***************************************************************************************/

    // // j = 3, 4, 5
    // // i from 1 - 2
    // sum13 = arr[0][3] + arr[1][3] + arr[2][3] + arr[1][4] + arr[0][5] + arr[1][5] + arr[2][5];
    // // i from 1 - 3
    // sum14 = arr[1][3] + arr[2][3] + arr[3][3] + arr[2][4] + arr[1][5] + arr[2][5] + arr[3][5];
    // // i from 2 - 4
    // sum15 = arr[2][3] + arr[3][3] + arr[4][3] + arr[3][4] + arr[2][5] + arr[3][5] + arr[4][5];
    // // i from 3 - 5
    // sum16 = arr[3][3] + arr[4][3] + arr[5][3] + arr[4][4] + arr[3][5] + arr[4][5] + arr[5][5];
    // /***************************************************************************************/

    // cout << max({sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9, sum10, sum11, sum12, sum13, sum14, sum15, sum16});
    // return 0;
    int sum[16]; int k = 0;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if (j + 2 < 6 && i + 2 < 6) {
                sum[k] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                k++;
            }
        }
    }
    sort(sum, sum+16);
    cout << sum[15];
    return 0;
}
