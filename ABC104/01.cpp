#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;

    if(score < 1200) {
        cout << "ABC" << endl;
    } else if(score < 2800) {
        cout << "ARC" << endl;
    } else {
        cout << "AGC" << endl;
    }
}