#include <iostream>
using namespace std;

class Number
{
private:
    int x;

public:

    Number(int value)
    {
        x = value;
    }

    void operator-()
    {
        x = -x;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n(10);

    cout << "Before Unary Operator:" << endl;
    n.display();

    -n;

    cout << "After Unary Operator:" << endl;
    n.display();

    return 0;
}