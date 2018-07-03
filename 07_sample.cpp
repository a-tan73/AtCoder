#include <iostream>
using namespace std;

int main()
{
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> d[i];

    int num[110] = {0}; // バケット
    for (int i = 0; i < N; ++i)
    {
        num[d[i]]++; // d[i]が1個増える
    }

    int res = 0; // 答えを格納
    for (int i = 1; i <= 100; ++i)
    {
        if (num[i])
        {
            ++res;
        }
    }
    cout << res << endl;
}