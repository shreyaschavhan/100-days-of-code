#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for(int x=1;x<=t;x++)
    {
        int n;
        cin>>n;
        int max=1;
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            max=1;
            flag=false;
            int a = i;
            if(n-a == 0)
            {
                break;
            }
            int b = (n*(n-2*a))/(2*(n-a));
            int c = n - a -b;
            if(a*a + b*b == c*c && b>0 && c>0 && a<c && b<c && a!=b)
            {
                if(a*b*c > max)
                    max=a*b*c;
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<-1<<endl;
        else
            cout<<max<<endl;
    }
    return 0;
}
