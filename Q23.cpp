#include <iostream>
using namespace std;

int main() {
    cout << "Harshad numbers: ";

    for (int n = 1; n <= 100; n++) {
        int temp = n, sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (n % sum == 0)
            cout << n << " ";
    }

    return 0;
}