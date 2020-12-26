#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector< vector<int> > grid(20,vector<int>(20));
    for(int grid_i = 0;grid_i < 20;grid_i++){
    	for(int grid_j = 0;grid_j < 20;grid_j++){
    		cin >> grid[grid_i][grid_j];
    	}
    }
    int lrmaxProduct = INT_MIN;
    for(int i = 0; i < 20; i++){
        int count = 0;
        int product = 1;
        for(int j = i; j < 20; j++){
            product *= grid[i][j];
            count++;
            if(count == 4){
                break;
            }
        }
        lrmaxProduct = max(lrmaxProduct, product);
    }
    int upmaxProduct = INT_MIN;
    for(int i = 0; i < 20; i++){
        int count = 0;
        int product = 1;
        for(int j = i; j < 20; j++){
            product *= grid[j][i];
            count++;
            if(count == 4){
                break;
            }
        }
        upmaxProduct = max(upmaxProduct, product);
    }
    int maxProduct = max(upmaxProduct, lrmaxProduct);
    cout << maxProduct << endl;
    return 0;
}
