
#include <iostream>

int main() {
    double basicSalary;
    double tax = 0.0;
    
    // Prompt the user to enter the basic salary
    std::cout << "Enter the basic salary: ";
    std::cin >> basicSalary;
    
    // Calculate the income tax based on the given conditions
    if (basicSalary >= 15000 && basicSalary <= 20000) {
        tax = 0.1 * basicSalary;
    }
    else if (basicSalary > 20000 && basicSalary <= 310000) {
        tax = 0.1 * 20000 + 0.05 * (basicSalary - 20000);
    }
    else if (basicSalary > 310000 && basicSalary <= 100000) {
        tax = 0.1 * 20000 + 0.05 * 310000 + 0.02 * (basicSalary - 310000);
    }
    else if (basicSalary > 100000) {
        tax = 0.1 * 20000 + 0.05 * 310000 + 0.02 * 100000 + 0.01 * (basicSalary - 100000);
    }
    
    // Calculate the net pay after deducting the tax
    double netPay = basicSalary - tax;
    
    // Print the subtotal for tax deduction and the net pay
    std::cout << "Subtotal for Tax Deduction: " << tax << std::endl;
    std::cout << "Total Entitled Net Pay: " << netPay << std::endl;

    return 0;
}
