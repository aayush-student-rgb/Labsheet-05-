#include <iostream>
using namespace std;

int main() {
    cout << "Strong numbers: ";

    for (int n = 1; n <= 500; n++) {
        int temp = n;
        int sum = 0;

        do {
            int digit = temp % 10;
            int fact = 1;

            for (int i = 1; i <= digit; i++)
                fact *= i;

            sum += fact;
            temp /= 10;
        } while (temp != 0);

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}