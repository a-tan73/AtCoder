#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int A[N];
    int p;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
            p = i;
    }

    int cnt = 0;
    int i = 0;
    for (i = p; i > 0; i -= (K - 1))
    {
        cnt++;
    }
    int d = abs(i);
    for (i = p + d; i < (N - 1); i += (K - 1))
    {
        cnt++;
    }

    cout << cnt << endl;
}