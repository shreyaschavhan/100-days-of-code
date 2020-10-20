#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop :: setPrice(void){
    cout << "Enter the Id of your item no. " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout /*<< endl*/ << "Enter the price of your item: ";
    cin >> itemPrice[counter];
    cout << endl;
    counter++;
}

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++) {
        cout << "The price of item Id no. " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main(){
    Shop DMart;
    DMart.initcounter();
    DMart.setPrice();
    DMart.setPrice();
    DMart.setPrice();
    DMart.displayPrice();

    return 0;
}
