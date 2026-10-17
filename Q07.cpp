#include <iostream>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == -1) break;
        if (n < 0) continue;
        cout << n << " ";
    }
    return 0;
}