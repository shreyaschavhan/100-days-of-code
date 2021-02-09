#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    int h = 1;
    while((h*base)/2 < area){
        h++;
    }
    return h;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
