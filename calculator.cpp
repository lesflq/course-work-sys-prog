#include "calculator.h"
/**
* @author IO-24 Maksym Sevastianov
*/

int Calculator::Add (double a, double b)
{
	return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Div (double a, double)
{
    return a / b;
}
int Calculator::Mod (double a, double)
{
    return a % b;
}
