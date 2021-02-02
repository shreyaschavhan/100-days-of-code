// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

// Formula =>
// rx = (2*qx) - px;
// ry = (2*qy) - py;

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    while(N--){
        int px, py, qx, qy;
        cin >> px >> py >> qx >> qy;
        cout << (2*qx) - px << " " << (2*qy) - py << '\n';
    }
    return 0;
}
