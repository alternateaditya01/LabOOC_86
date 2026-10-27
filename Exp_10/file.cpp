#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    // Open file for writing
    fout.open("sample.txt");

    if (!fout)
    {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter text (-1 to stop):" << endl;

    while (getline(cin, line))
    {
        if (line == "-1")
            break;

        fout << line << endl;
    }

    // Close the file after writing
    fout.close();

    // Open file for reading
    ifstream fin;
    fin.open("sample.txt");

    if (!fin)
    {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nContent read from file:" << endl;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    // Close the file after reading
    fin.close();

    return 0;
}