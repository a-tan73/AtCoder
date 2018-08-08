#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    string result = "AC";
    int cnt = 0;

    if(S[0] != 'A') {
        result = "WA";
    }
    for(int i = 1; i < S.length(); i++) {
        if(i >= 2 && i <= S.length() -1) {
            if(S[i] == 'C') cnt++;
        }
        if(S[i] >= 'A' && S[i] <= 'Z' && S[i] != 'C') {
            result = "WA";
        }
    }
    if(S[S.length() - 1] == 'C') {
        result = "WA";
    }
    if(cnt != 1) {
        result = "WA";
    }

    cout << result << endl;
}