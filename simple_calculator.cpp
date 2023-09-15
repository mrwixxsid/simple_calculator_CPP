#include <iostream>
#include <cmath>
#include <limits> // for numeric_limits

using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Division by zero is not allowed." << endl;
        return 0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double num) {
    return sqrt(num);
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}

int main() {
    int choice;
    double num1, num2;
    char cont;

    do {
        cout << "Calculator Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exponentiation\n";
        cout << "6. Square Root\n";
        cout << "7. Sine\n";
        cout << "8. Cosine\n";
        cout << "9. Tangent\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Check if the input is valid
        if (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Invalid input. Please enter a number." << endl;
            continue; // Continue to the next iteration
        }

        if (choice >= 1 && choice <= 9) {
            cout << "Enter first number: ";
            cin >> num1;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a number." << endl;
                continue;
            }

            if (choice >= 1 && choice <= 5) {
                cout << "Enter second number: ";
                cin >> num2;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a number." << endl;
                    continue;
                }
            }

            switch (choice) {
                case 1:
                    cout << "Result: " << add(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Result: " << subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << "Result: " << multiply(num1, num2) << endl;
                    break;
                case 4:
                    cout << "Result: " << divide(num1, num2) << endl;
                    break;
                case 5:
                    cout << "Result: " << power(num1, num2) << endl;
                    break;
                case 6:
                    cout << "Result: " << squareRoot(num1) << endl;
                    break;
                case 7:
                    cout << "Result: " << sine(num1) << endl;
                    break;
                case 8:
                    cout << "Result: " << cosine(num1) << endl;
                    break;
                case 9:
                    cout << "Result: " << tangent(num1) << endl;
                    break;
            }
        } else {
            cout << "Invalid choice." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    cout << "Calculator has exited." << endl;

    return 0;
}
