// Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x, y;
public:
    friend double distance(Point o1, Point o2);
    Point(int a, int b){
        x = a;
        y = b;
    }
    void displayPoint(){
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

double distance(Point o1, Point o2){
    int t1, t2;
    t1 = (o1.x - o2.x) * (o1.x - o2.x);
    t2 = (o1.y - o2.y) * (o1.y - o2.y);
    double dist = sqrt(t1+t2);
    return dist;
}
int main(){
    Point p(1, 1);
    p.displayPoint();
    Point q(1, 1);
    q.displayPoint();
    double distan = distance(p, q);
    cout << distan << endl;

    Point r(0, 1);
    r.displayPoint();
    Point s(0, 6);
    s.displayPoint();
    distan = distance(r, s);
    cout << distan << endl;

    Point t(1, 0);
    t.displayPoint();
    Point u(70, 0);
    u.displayPoint();
    distan = distance(t, u);
    cout << distan << endl;
    return 0;
}
