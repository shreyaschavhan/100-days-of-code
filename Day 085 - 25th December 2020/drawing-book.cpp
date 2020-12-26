// LInk - https://www.hackerrank.com/challenges/drawing-book/problem
/*
Easy approach -
if even pages - then they turn (n-p)/2 pages;
if odd pages - then they turn (n-p+1)/2 pages.
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int rightcount = 0;
    for(int i = 1; i < n; i++){
        if(rightcount == p){
            break;
        }
        rightcount++;
    }
    int leftcount;
    if(n % 2 == 0){
        leftcount = n + 1;
    }
    else{
        leftcount = n;
    }

    int count = 0;
    for(int i = n; i > 1; i--){
        if(leftcount == p){
            break;
        }
        leftcount--;
        count++;
    }
    int minCount = min(count, rightcount);
    return minCount/2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
