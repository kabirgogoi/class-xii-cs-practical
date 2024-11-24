// AIM: To write data to a binary file using C++

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;

    outputFile.open("file.dat", ios::binary);

    if (outputFile.is_open())
    {
        outputFile << "CNB Senior Secondary School" << endl;
        outputFile << "We read in class XII" << endl;

        outputFile.close();
        cout << "Successfully wrote to file" << endl;
    }
    else
    {
        cerr << "Unable to open file!!" << endl;
    }

    return 0;
}

/*
Output

Successfully wrote to file
*/
