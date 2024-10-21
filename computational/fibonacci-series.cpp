// AIM: To show fibonacci series up to n number of terms

#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if (i == 1) {
            cout << t1 << "\t";
            continue;
        }
        if (i == 2) {
            cout << t2 << "\t";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << "\t";
    }
    return 0;
}

/*
Output

Enter the number of terms: 10
Fibonacci Series: 0     1       1       2       3       5       8       13      21      34

*/