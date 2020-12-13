#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    int second_i;
    double second_d;
    string second_s;
    cin >> second_i >> second_d;
    cin.ignore();
    getline(cin, second_s);
    cout << i + second_i << endl;
    cout << fixed << setprecision(1) << d + second_d << endl;
    cout << s.append(second_s) << endl;
    return 0;
}
