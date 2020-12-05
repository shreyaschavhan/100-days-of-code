// Link - https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string output;
    stringstream ss(s);
    char colon;
    int hr, min, sec;
    string am_pm;
    ss >> hr >> colon >> min >> colon >> sec >> am_pm;
    if(am_pm == "AM"){
        if(hr == 12){
            output = "00";
        }
        else{
            if(hr < 10){
                output = "0" + to_string(hr);
            }
            else{
                output = to_string(hr);
            }
        }
    }
    else{
        if(hr == 12){
            output = "12";
        }
        else{
            if(hr < 12){
                hr += 12;
                output = to_string(hr);
            }
        }
    }
    if(min < 10){
        output += ":0" + to_string(min);
    }
    else{
        output += ":" + to_string(min);
    }

    if(sec < 10){
        output += ":0" + to_string(sec);
    }
    else{
        output += ":" + to_string(sec);
    }


    return output;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
