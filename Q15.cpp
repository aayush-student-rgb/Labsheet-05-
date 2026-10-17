#include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers: ";

    for (int n = 1; n <= 500; n++) {
        int temp = n, digits = 0;
        int sum = 0;

        do {
            digits++;
            temp /= 10;
        } while (temp != 0);

        temp = n;

        do {
            int digit = temp % 10;
            int power = 1;

            for (int i = 0; i < digits; i++)
                power *= digit;

            sum += power;
            temp /= 10;
        } while (temp != 0);

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}