#include <iostream>
using namespace std;

int main(void)
{
    int K;
    cin >> K;

    int a = K / 2;
    int b;
    if (K % 2 == 0)
        b = K / 2;
    else
        b = K / 2 + 1;

    int result = a * b;

    cout << result << endl;
}