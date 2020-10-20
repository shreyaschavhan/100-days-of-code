#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector <int> output;
    int integer;
    char comma;
    while(ss >> integer){
        output.push_back(integer);
        ss >> comma;
    }
    return output;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
