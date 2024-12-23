// AIM: To read the content of a text file using C++

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file;

    file.open("notes.txt");

    if (file.is_open())
    {
        string line;

        while (getline(file, line))
            cout << line << endl;

        file.close();
    }
    else
    {
        cerr << "Unable to open file!!" << endl;
    }


    return 0;
}

/*
Output:

CNB Senior Secondary Bokakhat
Learning file operations in C++

*/
