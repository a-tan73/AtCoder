#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = 0;
    int temp = n;
    while (temp > 0)
    {
        s += temp % 10;
        temp = temp / 10;
    }

    if (n % s == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}