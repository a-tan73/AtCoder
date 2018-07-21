#include <iostream>
using namespace std;

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int result1 = abs(a[0] - a[1]) + abs(a[1] - a[2]);
    int result2 = abs(a[0] - a[2]) + abs(a[1] - a[2]);
    int result3 = abs(a[0] - a[1]) + abs(a[0] - a[2]);

    int r = result1;
    if (r > result2)
        r = result2;
    if (r > result3)
        r = result3;

    cout << r << endl;
}