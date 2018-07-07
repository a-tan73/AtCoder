#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int w;
    cin >> str;
    cin >> w;
    for (int i = 0; i < str.length(); i += w)
    {
        cout << str[i];
    }
    cout << endl;
}