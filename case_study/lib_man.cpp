#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName, authorName;
    static int count;

public:
    Book()
    {
        bookID = 0;
        bookName = "Unknown";
        authorName = "Unknown";
        count++;
    }

    Book(int id, string name, string author)
    {
        bookID = id;
        bookName = name;
        authorName = author;
        count++;
    }

    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, authorName);
    }

    void display()
    {
        cout << "\nBook ID: " << bookID;
        cout << "\nBook Name: " << bookName;
        cout << "\nAuthor Name: " << authorName << endl;
    }

    static void showCount()
    {
        cout << "\nTotal Books: " << count << endl;
    }
};

int Book::count = 0;

int main()
{
    Book b1;
    Book b2(102, "Wings of Fire", "A.P.J. Abdul Kalam");

    cout << "Enter details of first book:\n";
    b1.input();

    cout << "\nBook Details:";
    b1.display();
    b2.display();

    Book::showCount();

    return 0;
}