#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // Initialize variables
    int num1, num2;

    // Ask users for input for num variables
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Decide whether sum of integers is even or odd
    if ((num1 + num2) % 2 == 0)
        cout << num1 + num2 << " is even.";
    else
        cout << num1 + num2 << " is odd."; // Print result

    return 0;
}
