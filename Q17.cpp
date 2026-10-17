#include <iostream>
using namespace std;

int main() {
    cout << "Perfect numbers: ";

    for (int n = 2; n <= 1000; n++) {
        int sum = 0;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                sum += i;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}