// AIM: A C++ program to create a class and use its methods

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void introduce()
    {
        cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
    }
};

int main() {
    Student student1;
    student1.name = "Amit";
    student1.age = 20;
    student1.introduce();
    return 0;
}

/*
Output:

Hi, I'm Amit and I'm 20 years old.
*/