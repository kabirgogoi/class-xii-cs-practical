// AIM: A C++ multiple inheritance program

#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void showPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }
};

// Base class 2
class Employee {
protected:
    string employeeID;
    string department;

public:
    Employee(string id, string dept) : employeeID(id), department(dept) {}

    void showEmployeeInfo() {
        cout << "Employee ID: " << employeeID << ", Department: " << department << endl;
    }
};

// Derived class
class Teacher : public Person, public Employee {
private:
    string subject;

public:
    Teacher(string n, int a, string id, string dept, string subj)
        : Person(n, a), Employee(id, dept), subject(subj) {
    }

    void showTeacherInfo() {
        showPersonInfo();
        showEmployeeInfo();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create a Teacher object
    Teacher teacher("Dr. M Hazarika", 30, "EMP12345", "Computer Science", "C++ Programming");

    // Display information
    teacher.showTeacherInfo();

    return 0;
}

/*
Output:

Name: Dr. M Hazarika, Age: 30 years
Employee ID: EMP12345, Department: Computer Science
Subject: Machine Learning

*/
