// AIM: A C++ single inheritance program

#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    void eat()
    {
        cout << name << " is eating." << endl;
    }

    void showInfo()
    {
        cout << "Name: " << name << ", Age: " << age << " years" << endl;
    }
};

// Derived class
class Dog : public Animal {
private:
    string breed;

public:
    Dog(string n, int a, string b) : Animal(n, a), breed(b) {}

    void bark()
    {
        cout << name << " is barking: Woof! Woof!" << endl;
    }

    void showDetails() {
        showInfo();
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog dog("Oreo", 3, "Golden Retriever");

    dog.showDetails();
    dog.eat();
    dog.bark();

    return 0;
}

/*
Output:

Name: Oreo, Age: 3 years
Breed: Golden Retriever
Oreo is eating.
Oreo is barking: Woof! Woof!

*/