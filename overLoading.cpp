#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Calculator calc;

    int result1 = calc.add(5, 7);
    double result2 = calc.add(3.5, 2.8);

    cout << "Integer addition result: " << result1 << endl;
    cout << "Double addition result: " << result2 << endl;

    return 0;
}
