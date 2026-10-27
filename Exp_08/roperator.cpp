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

    bool operator==(Number n)
    {
        return x == n.x;
    }

    bool operator!=(Number n)
    {
        return x != n.x;
    }

    bool operator<(Number n)
    {
        return x < n.x;
    }

    bool operator>(Number n)
    {
        return x > n.x;
    }

    bool operator<=(Number n)
    {
        return x <= n.x;
    }

    bool operator>=(Number n)
    {
        return x >= n.x;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    cout << "n1 == n2 : " << (n1 == n2) << endl;
    cout << "n1 != n2 : " << (n1 != n2) << endl;
    cout << "n1 < n2  : " << (n1 < n2) << endl;
    cout << "n1 > n2  : " << (n1 > n2) << endl;
    cout << "n1 <= n2 : " << (n1 <= n2) << endl;
    cout << "n1 >= n2 : " << (n1 >= n2) << endl;

    return 0;
}