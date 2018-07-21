#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int r = 1;
    int temp;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[0])
        {
            r = 1;
            for (int j = 0; j < s.length(); j++)
            {
                if (i + j >= s.length())
                {
                    temp = i - s.length();
                }
                else
                {
                    temp = i;
                }
                if (s[temp + j] != t[j])
                {
                    r = 0;
                    break;
                }
            }
            if (r == 1)
            {
                break;
            }
        }
    }
    if (r == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}