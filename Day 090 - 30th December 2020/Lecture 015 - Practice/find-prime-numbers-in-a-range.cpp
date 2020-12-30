#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int a = 0; a < t; a++){
	    int m, n;
	    cin >> m >> n;
	    bool prime[100000] = {0};
	    for(int i = 2; i < n + 1; i++){
	        if(prime[i] == 0){
	            for(int j = i*i; j < n + 1; j += i){
	                prime[j] = 1;
	            }
	        }
	    }
	    if(m == 1){
	        m = 2;
	    }
	    for(int i = m; i <= n; i++){
	        if(prime[i] == 0){
	            cout << i << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
