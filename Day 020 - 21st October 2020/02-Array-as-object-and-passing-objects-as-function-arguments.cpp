#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
public:
    void setData(int n1, int n2){
        a = n1;
        b = n2;
    }
    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2. a;
        b = o1.b + o2. b;
    }
    void printNumber(){
        cout << "Your complex number is: " << a << " + " << b << "i" << endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setData(3, 5);
    c1.printNumber();

    c2.setData(4, 5);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
