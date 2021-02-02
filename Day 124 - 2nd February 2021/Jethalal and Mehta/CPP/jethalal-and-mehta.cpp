/******************************************************************************
Didn't Worked - Runtime Error(SIGFPE)
*******************************************************************************


// Author - Shreyas Chavhan
// Github - https://www.github.com/shreyaschavhan

#include <bits/stdc++.h>
#define INF (unsigned)!((int)0)
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int Ax, Ay;
        int Bx, By;
        int Cx, Cy;
        int Dx, Dy;

        cin >> Ax >> Ay;
        cin >> Bx >> By;
        cin >> Cx >> Cy;
        cin >> Dx >> Dy;

        int m2;
        int m1;
        if((Dx - Cx) == 0 ){
            m2 = INF;
        }
        else if ((Bx - Ax) == 0){
            m1 = INF;
        }
        else{
            m2 = (Dy - Cy)/ (Dx - Cx);
            m1 = (By - Ay)/ (Bx - Ax);
        }

        if(atan((m1 - m2)/(1 + (m1*m2))) > 0 && atan((m1 - m2)/(1 + (m1*m2))) <= 90){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO"  << '\n';
        }

    }
    return 0;
}

********************************************************************************/
