// AIM: To append a line to a text file using C++

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

        cout << "Successfully appended to file" << endl;
    }
    else
    {
        cerr << "Unable to open file!!" << endl;
    }
    return 0;
}

/*

Output

Successfully appended to file
*/
