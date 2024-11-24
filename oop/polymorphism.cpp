// AIM: A C++ program to demonstrate polymorphism

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

};

int main() {
    Calculator calc;

    cout << "10 + 20 = " << calc.add(10, 20) << endl;
    cout << "10.5 + 20.5 = " << calc.add(10.5, 20.5) << endl;

    return 0;
}

/*
Output:

10 + 20 = 30
10.5 + 20.5 = 31

*/