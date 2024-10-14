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
        cout << "Success!!" << endl;
    }
    else
    {
        cerr << "Unable to open file!!" << endl;
    }

    return 0;
}
