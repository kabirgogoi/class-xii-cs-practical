// AIM: A C++ program to demonstrate constructor and destructor

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileManager {
private:
    fstream file;

public:
    // Constructor to open the file in specified mode
    FileManager(string fileName, ios::openmode mode) {
        file.open(fileName, mode);
        if (file.is_open()) {
            cout << "File opened successfully." << endl;
        }
        else {
            cout << "Failed to open the file." << endl;
        }
    }

    // Destructor to close the file
    ~FileManager() {
        if (file.is_open()) {
            file.close();
            cout << "File closed successfully." << endl;
        }
    }

    // Method to write data to the file
    void writeToFile(string data) {
        if (file.is_open()) {
            file << data << endl;
            cout << "Data written to file." << endl;
        }
        else {
            cout << "File is not open for writing." << endl;
        }
    }

    // Method to read data from the file
    void readFromFile() {
        if (file.is_open()) {
            string line;
            cout << "Reading from file:" << endl;
            while (getline(file, line)) {
                cout << line << endl;
            }
        }
        else {
            cout << "File is not open for reading." << endl;
        }
    }
};

int main() {
    FileManager fm("example.txt", ios::in | ios::out);
    fm.writeToFile("Hello, I am learning C++");

    FileManager fmRead("example.txt", ios::in);
    fmRead.readFromFile();

    return 0;
}

/*

Output:

File opened successfully.
Data written to file.
File opened successfully.
Reading from file:
Hello, I am learning C++
File closed successfully.
File closed successfully.

*/
