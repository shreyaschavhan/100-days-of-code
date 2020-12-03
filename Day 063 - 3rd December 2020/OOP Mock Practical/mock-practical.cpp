#include <bits/stdc++.h>
using namespace std;

class numbers{
public:
    virtual void input() = 0;
    virtual int add() = 0;
};

class addition : public numbers{
    int num1, num2;
public:
    void input(){
        cin >> num1 >> num2;
    }
    int add(){
        return num1 + num2;
    }
};

int main(){
    numbers *obj;
    addition adding;
    obj = &adding;
    obj -> input();
    int ans = obj -> add();
    cout << "Sum :" << ans << endl;
    return 0;
}
