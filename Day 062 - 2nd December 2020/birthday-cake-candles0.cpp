#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    int maxCandle = INT8_MIN;
    int count = 0;
    for(int i : candles){
        maxCandle = max(maxCandle, i);
    }
    for(int i : candles){
        if(maxCandle == i)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector <int> candles(n);
    for(int i = 0; i < n; i++){
        cin >> candles[i];
    }
    int ans = birthdayCakeCandles(candles);
    cout << ans;
    return 0;
}
