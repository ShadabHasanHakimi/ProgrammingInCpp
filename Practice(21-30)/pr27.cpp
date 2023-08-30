#include <iostream>
#include<math.h>
using namespace std;
class point
{
private:
    int x, y;

public:
    friend void distance(point p1, point p2);
    void set_points()
    {
        int p,q;
        cout << "Enter point :" << endl;
        cin >> p >> q;
        x=p;
        y=q;
    }
};
void distance(point p1, point p2)
    {
        int diff_1, diff_2;
        float dist;
        diff_1 = (p1.x - p2.x);
        diff_2 = (p1.y - p2.y);
        dist = sqrt(pow(diff_1, 2) + pow(diff_2, 2));
        cout<<"Distance between ("<<p1.x<<", "<<p1.y<<") and ("<<p2.x<<", "<<p2.y<<") is "<<dist;
    }
int main()
{
    point p1, p2;
    p1.set_points();
    p2.set_points();
    distance(p1, p2);
    return 0;
}