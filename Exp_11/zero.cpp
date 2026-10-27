#include <iostream>
using namespace std;

double division(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero condition!";
    }

    return static_cast<double>(a) / b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    try
    {
        double result = division(x, y);
        cout << "Result = " << result << endl;
    }
    catch (const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}