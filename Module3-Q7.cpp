#include <iostream>


int main() {

	// Initialize variables
    float num1, num2, num3, num4;
    
	// Ask users for input for num variables
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

	// Calculate average of numbers
    float average = (num1 + num2 + num3 + num4) / 4;

	// Print the average of provided numbers
    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
