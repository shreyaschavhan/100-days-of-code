#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 11.16, result;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = 13.87;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = 50.5;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = -11.16;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = -13.87;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    x = -50.5;
    result = round(x);
    cout << "round(" << x << ") = " << result << endl;

    return 0;
}
