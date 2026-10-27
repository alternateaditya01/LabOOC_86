#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid age! Age must be 18 or above.";
    }
};

class Person
{
private:
    string name;
    int age;

public:
    void inputDetails()
    {
        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void validateAge()
    {
        if (age < 18)
        {
            throw InvalidAgeException();
        }
    }

    void displayDetails() const
    {
        cout << "\nPerson Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person;

    try
    {
        person.inputDetails();
        person.validateAge();
        person.displayDetails();

        cout << "Age validated successfully." << endl;
    }
    catch (const InvalidAgeException& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}