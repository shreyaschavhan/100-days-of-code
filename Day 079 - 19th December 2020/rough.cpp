#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'frequencyQueries' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER k
 *  3. 2D_INTEGER_ARRAY queries
 */

vector<int> frequencyQueries(vector<int> arr, int k, vector<vector<int>> queries) {
    vector <int> result;
    vector <int> newarray;
    for(int j = 0; j < k; j++){
        for(int i : arr){
            newarray.push_back(i);
        }
    }

    for(int m = 0; m < queries.size(); m++){
        int count = 0;
        // for(int n = 0; n < 3; n++){
            int p = queries[m][0];
            int q = queries[m][1];
            int r = queries[m][2];
        // }

        for(int t = 0; t < newarray.size(); t++){
            for(int s = p; s <= q; s++){
                if(newarray[s] == r){
                    count++;
                }
            }
        }
        result.push_back(count);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string queries_rows_temp;
    getline(cin, queries_rows_temp);

    int queries_rows = stoi(ltrim(rtrim(queries_rows_temp)));

    string queries_columns_temp;
    getline(cin, queries_columns_temp);

    int queries_columns = stoi(ltrim(rtrim(queries_columns_temp)));

    vector<vector<int>> queries(queries_rows);

    for (int i = 0; i < queries_rows; i++) {
        queries[i].resize(queries_columns);

        string queries_row_temp_temp;
        getline(cin, queries_row_temp_temp);

        vector<string> queries_row_temp = split(rtrim(queries_row_temp_temp));

        for (int j = 0; j < queries_columns; j++) {
            int queries_row_item = stoi(queries_row_temp[j]);

            queries[i][j] = queries_row_item;
        }
    }

    vector<int> result = frequencyQueries(arr, k, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
