#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p,int q){
    vector<int> kaprekar;
    for(int i=p;i<q+1;i++){
        if(i==1)
            kaprekar.push_back(i);
        else if(i>3){
            long long int sq = (long long)i*i;
            string square = to_string(sq);
            string l = square.substr(0,square.size()-to_string(i).size());
            string r = square.substr(square.size()-to_string(i).size(), square.size());
            int sum = stoi(l) + stoi(r);
            if(sum==i)
                kaprekar.push_back(i);

        }
    }
    if(kaprekar.size()==0)
        cout << "INVALID RANGE";
    for(auto i: kaprekar)
        cout << i << " ";
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
