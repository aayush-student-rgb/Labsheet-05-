#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number (1-3): ";
    if (!(cin >> n)) {
        cout << "Invalid input";
        return 1;
    }
    switch (n) {
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        default: cout << "No matching case";
    }
    return 0;
}