#include <iostream>
using namespace std;

int main()
{
    int N;
    int a[200001];
    int b[200001];
    long long result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        b[i] = a[i] - (i + 1);
    }
    sort(b, b + N);
    for (int i = 0; i < N; i++)
    {
        result += abs(a[i] - (i + 1) - b[(N + 1) / 2 - 1]);
    }
    cout << result << endl;
}