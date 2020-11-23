#include <iostream>
using namespace std;

void alphabetOrnot(char a){
    if(isalpha(a)){
        cout << "Alphabet"<< endl;
    }
    else{
        cout << "Not Alphabet" << endl;
    }
}

int main(){
    char a;
    cin >> a;
    alphabetOrnot(a);
    return 0;
}
