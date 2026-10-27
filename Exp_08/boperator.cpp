#include <iostream>
using namespace std;

class Number
{
private:
    int x;

public:

    Number(int value = 0)
    {
        x = value;
    }

    Number operator+(Number n)
    {
        Number temp;

        temp.x = x + n.x;

        return temp;
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    cout << "First Number: ";
    n1.display();

    cout << "Second Number: ";
    n2.display();

    cout << "After Binary + Operator: ";
    n3.display();

    return 0;
}