#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 1) {
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                sum += i;
        }
    }

    if (n > 1 && sum == n)
        cout << "Perfect number";
    else
        cout << "Not a perfect number";

    return 0;
}