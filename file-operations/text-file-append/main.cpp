#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;

    outputFile.open("notes.txt", ios::app);

    if (outputFile.is_open())
    {
        outputFile << "This line is appended to notes.txt" << endl;
        outputFile.close();

        cout << "Success!!" << endl;
    }
    else
    {
        cerr << "Unable to open file!!" << endl;
    }
    return 0;
}
