#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    int a[110];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    sort(a, a + N, greater<int>());
    cout << a[0] - a[N - 1] << endl;
}
