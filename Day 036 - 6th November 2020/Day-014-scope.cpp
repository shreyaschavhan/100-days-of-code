#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector <int> a){
        elements = a;
    }
    int computeDifference(){
        sort(elements.begin(), elements.end());
        int n = elements.size();
        maximumDifference = 0;
        for(int i = 0; i < n; i++){
            int diff;
            diff = elements[n-1] - elements[i];
            if(diff > maximumDifference){
                maximumDifference = diff;
            }
        }
        return maximumDifference;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
