#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int main() {
    int a = 5;
    int b = 10;
    int result = a * b;
    std::cout << "Multiplication result: " << result << std::endl;

    // Добавленные изменения
    int c = 7;
    int sum = a + b + c;
    std::cout << "Sum result: " << sum << std::endl;

    return 0;
}

