// Author - Shreyas Chavhan
// Profile - https://github.com/shreyaschavhan
/***************************
algorithm -
1. Sort array in descending order.
2. Multiply by (i+1)
3. Find max among all, and that's the answer
*******************************/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    vector <long long> budget;
    for(long long i = 0; i < n; i++){
        int bud;
        cin >> bud;
        budget.push_back(bud);
    }
    long long maxBudget = INT_MIN;
    sort(budget.begin(), budget.end(), greater<long long>());
    for(long long i = 0; i < n; i++){
        budget[i] = budget[i] * (i+1);
        maxBudget = max(maxBudget, budget[i]);
    }

    cout << maxBudget << '\n';
    return 0;
}
/*
// Brute force approach
// Partially Correct - Time limit Exceeded -
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    long long maxSum = 0;
    vector <long long> budget;
    for(long long i = 0; i < n; i++){
        int bud;
        cin >> bud;
        budget.push_back(bud);
    }
    for(long long i = 0; i < n; i++){
        long long sum = budget[i];
        for(long long j = 0; j < n; j++){
            if(budget[i] <= budget[j] && i != j){
                sum += budget[i];
            }
        }
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << '\n';
    return 0;
}
*/
