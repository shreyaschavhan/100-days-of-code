#include <iostream>
#include <stdexcept>
using namespace std;


float Division(float num, float den)
{

    if (den == 0) {
        throw runtime_error("Attempted to divide by Zero\n");
    }
    else {
    return (num / den);
    }
}

int main()
{
    float numerator, denominator, result;

    cin >> numerator;
    cin >> denominator;


    try {
        result = Division(numerator, denominator);


        cout << "The quotient is "<< result << endl;
    }



    catch (runtime_error& e) {

        cout << "Exception occurred" << endl
             << e.what();
    }

} 
