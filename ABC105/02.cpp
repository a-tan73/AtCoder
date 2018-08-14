#include <iostream>
using namespace std;
 
int main() {
 
    int N;
    cin >> N;
 
    int result = 0;
    if(N % 7 == 0) result = 1;
    while(1) {
        N -= 4;
        if(N % 7 == 0) {
            result = 1;
            break;
        }
        if(N < 0) {
            break;
        }
    }
    if(result == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}