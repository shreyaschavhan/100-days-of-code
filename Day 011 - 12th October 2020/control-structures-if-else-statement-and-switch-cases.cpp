#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "The type of control structures: " << endl;
    cout << "1. Sequence control structure " << endl;
    cout << "2. Selection control structure " << endl;
    cout << "3. Loop control structure " << endl;

    cout << "----------------------Selection Control Structure-----------------------" << endl;

    int a = 3, b = 78, c = 1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;


    cout << "----------------------Selection Control Structure-----------------------" << endl;
    cout << " i. Selection control structure: If else-if else ladder" << endl;

    int age;
    cout<< "Tell me your age"<<endl;
    cin>>age;


    if ((age<18) && (age>0)){
        cout << "You can not come to my party" << endl;
    }
    else if (age==18){
        cout << "You are a kid and you will get a kid pass to the party" << endl;
    }
    else if (age<1){
        cout << "You are not yet born" << endl;
    }
    else{
        cout << "You can come to the party" << endl;
    }

    cout <<" ii. Selection control structure: Switch Case statements " << endl;

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";

    cout << "----------------------Loop Control Structure-----------------------" << endl;
    cout << "There are 3 types of loops: " << endl;
    cout << "\t1. for-loop" << endl;
    cout << "\t2. while-loop" << endl;
    cout << "\t3. do-whlie-loop" << endl;

    cout << "----------For Loop------------" << endl;
    for (int i = 0; i < 100; i++){
      cout << i << endl;
    }

    cout << "----------While Loop------------" << endl;
    int i = 0;
    while(i < 100){
      cout << i << endl;
      i++;
    }
    cout << "----------do While Loop------------" << endl;
    int j = 1;
    do{
    cout << j <<endl;
    j += 1;
  }while(j <= 100);

    return 0;
}
