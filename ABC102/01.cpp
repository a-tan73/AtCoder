#include <iostream>
using namespace std;

int main()
{
    int N;
    int result = 0;
    cin >> N;
    if (N % 2 == 0)
        result = N;
    else
        result = 2 * N;
    cout << result << endl;
}