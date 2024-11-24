// AIM: A C++ multilevel inheritance program

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void showBasicInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Intermediate class
class Student : public Person {
protected:
    string rollNumber;
    string grade;

public:
    Student(string n, int a, string r, string g)
        : Person(n, a), rollNumber(r), grade(g) {
    }

    void showStudentInfo() {
        showBasicInfo();
        cout << "Roll Number: " << rollNumber << ", Grade: " << grade << endl;
    }
};

// Derived class
class GraduateStudent : public Student {
private:
    string major;
    string thesisTitle;

public:
    GraduateStudent(string n, int a, string r, string g, string m, string t)
        : Student(n, a, r, g), major(m), thesisTitle(t) {
    }

    void showGraduateInfo() {
        showStudentInfo();
        cout << "Major: " << major << endl;
        cout << "Thesis Title: " << thesisTitle << endl;
    }
};

int main() {
    // Create a GraduateStudent object
    GraduateStudent grad("Ajay Kumar Sharma", 24, "S12345", "A", "Computer Science", "AI in Healthcare");

    // Display information
    grad.showGraduateInfo();

    return 0;
}


/*
Output:


Name: Ajay Kumar Sharma, Age: 24
Roll Number: S12345, Grade: A
Major: Computer Science
Thesis Title: AI in Healthcare

*/