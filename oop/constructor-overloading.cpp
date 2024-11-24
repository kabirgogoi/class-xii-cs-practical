// AIM: A C++ program to demonstrate constructor overloading

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    // Parameterized constructor with one parameter
    Rectangle(int side) {
        length = side;
        width = side;
    }

    // Parameterized constructor with two parameters
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void display() {
        int area = length * width;
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area << endl;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 7);

    r1.display();
    r2.display();
    r3.display();

    return 0;
}


/*
Output:

Length: 0, Width: 0, Area: 0
Length: 5, Width: 5, Area: 25
Length: 4, Width: 7, Area: 28

*/
