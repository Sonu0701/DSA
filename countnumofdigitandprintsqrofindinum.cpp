#include <iostream>
using namespace std;

void printDigitSquares(int number) {
    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Count digits
    int temp = number;
    int digitCount = 0;
    while (temp > 0) {
        digitCount++;
        temp /= 10;
    }

    cout << "Number of digits: " << digitCount << endl;

    // Print squares of individual digits (from left to right)
    int digits[10];  // assuming the number has at most 10 digits
    int index = 0;

    temp = number;
    while (temp > 0) {
        digits[index++] = temp % 10;
        temp /= 10;
    }

    cout << "Squares of individual digits: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << (digits[i] * digits[i]) << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printDigitSquares(num);

    return 0;
}
