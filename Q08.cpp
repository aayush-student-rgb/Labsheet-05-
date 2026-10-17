#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        int product = n * i;
        if (product > 50) break;
        cout << n << " x " << i << " = " << product << endl;
    }
    return 0;
}