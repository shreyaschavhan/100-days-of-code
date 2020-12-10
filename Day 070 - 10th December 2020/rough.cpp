#include <bits/stdc++.h>
using namespace std;

class myexception: public exception
{
    virtual const char* what() const throw()
    {
        return "My exception";
    }
} ex;
// int main()
{
    try{
        throw ex;
    }
    catch(exception &LFC){
        cout << "Caught: " << LFC.what() << endl;
    };

    return 0;
}
