#include <iostream>
using namespace std;
class pattern
{
private:
    int i, j, k, l, m;

public:
    void show();
};
void pattern ::show()
{
    l = 9;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << " ";
        }
        l = 9 - i;
        for (k = 5; k > i; k--)
        {
            cout << l;
            l--;
        }
        l = 6;
        for (m = 4; m > i; m--)
        {
            cout << l;
            l++;
        }
        cout << endl;
    }
}
int main()
{
    pattern a;
    a.show();
    return 0;
}