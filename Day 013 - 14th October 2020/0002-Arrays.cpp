    // Quick quiz: do the same using while and do-while loops?

    #include<iostream>
    using namespace std;

    int main(){
        // Array Example
        int marks[] = {23, 45, 56, 89};

        int mathMarks[4];
        mathMarks[0] = 2278;
        mathMarks[1] = 738;
        mathMarks[2] = 378;
        mathMarks[3] = 578;

        cout<<"These are math marks"<<endl;
        cout<<mathMarks[0]<<endl;
        cout<<mathMarks[1]<<endl;
        cout<<mathMarks[2]<<endl;
        cout<<mathMarks[3]<<endl;

        // You can change the value of an array
        marks[2] = 455;
        cout<<"These are marks"<<endl;
        // cout<<marks[0]<<endl;
        // cout<<marks[1]<<endl;
        // cout<<marks[2]<<endl;
        // cout<<marks[3]<<endl;

        for (int i = 0; i < 4; i++)
        {
            cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        }

        // Quick quiz: do the same using while and do-while loops?
        int i = 0;
        cout << "Using while loop" << endl;
        while (i < 4) {
          cout<<"The value of marks "<< i <<" is "<<marks[i]<<endl;
          i++;
        }
        cout << "Using do -while loop" << endl;
        int j = 0;
        do {
          cout<<"The value of marks "<< j <<" is "<<marks[j]<<endl;
          j++;
        } while(j < 4);

        return 0;
    }
