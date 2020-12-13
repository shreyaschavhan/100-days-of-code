/*******************************************************************************
Write C++ Program with base class convert declares two variables, val1
and val2, which hold the initial and converted values, respectively. It also
defines the functions getinit( ) and getconv( ), which return the initial value
and the converted value. Int Val1 = 5 Explicitly convert the int to float
These elements of convert are fixed and applicable to all derived classes that
will inherit convert. However, the function that will actually perform the
conversion, compute ( ), is a pure virtual function that must be defined by
the classes derived from convert. The specific nature of compute ( ) will be
determined by what type of conversion is taking place.
Baseclass getinit() getcnv()
*******************************************************************************/

#include <iostream>
using namespace std;
class convert
{
protected:
    double val1;
    double val2;

public:
    convert(double i)
    {
        val1 = i;
    }
    double getconv()
    {
        return val2;
    }
    double getinit()
    {
        return val1;
    }
    virtual void compute() = 0;
};

class l_to_g : public convert
{
public:
    l_to_g(double i) : convert(i)
    {
    }
    void compute()
    {
        val2 = val1 / 3.7854;
    }
};
// Fahrenheit to Celsius
class f_to_c : public convert
{
public:
    f_to_c(double i) : convert(i)
    {
    }
    void compute()
    {
        val2 = (val1 - 32) / 1.8;
    }
};

int main()
{
    convert *p;
    l_to_g lgob(4);
    f_to_c fcob(70);

    p = &lgob;
    cout << p->getinit() << " liters is ";
    p->compute();
    cout << p->getconv() << " gallons\n";
    p = &fcob;
    cout << p->getinit() << " in Fahrenheit is ";
    p->compute();
    cout << p->getconv() << " Celsius\n";
    return 0;
}
