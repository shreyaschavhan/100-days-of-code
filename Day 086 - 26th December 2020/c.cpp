#include <bits/stdc++.h>

using namespace std;

void countingValleys(int steps, string path) {
    int count = 0;
    int valley = 0;
    for(int i = 0; i < steps; i++){
        if(path[i] == 'D'){
            count--;
        }
        if(path[i] == 'U'){
            count++;
        }
        if(count == 0 && path[i] == 'U'){
            valley++;
        }
    }
    cout << valley << endl;
}

int main()
{
    int steps;
    string path;
    cin >> steps;
    cin >> path;
    // cout << countingValleys(steps, path) << endl;
    countingValleys(steps, path);
    return 0;
}
