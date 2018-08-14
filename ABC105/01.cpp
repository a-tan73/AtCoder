#include <iostream>
using namespace std;
 
int main() {
 
    int K, N;
 
    cin >> N >> K;
 
    if(N % K == 0) {
        cout << "0" << endl;
    } else {
        cout << "1" << endl;
    }
}