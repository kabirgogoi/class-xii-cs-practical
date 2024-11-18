// AIM: To implement a stack using an array and perform insertion, deletion, and display operations

#include <iostream>
using namespace std;

#define MAX 1000 // Maximum size of the stack

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() : top(-1) {}

    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return 0;
        }
        return arr[top--];
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "The stack now is:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i];
            if (i == top) {
                cout << " <--"; // Indicate top of the stack
            }
            cout << endl;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack stack;
    char choice;

    do {
        int item;
        cout << "Enter item for insertion: ";
        cin >> item;
        stack.push(item);
        stack.display();

        cout << "Want to insert more elements? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Do you want to pop an element? (y/n): ";
    cin >> choice;

    while ((choice == 'y' || choice == 'Y') && !stack.isEmpty()) {
        cout << "Popped item: " << stack.pop() << endl;
        stack.display();

        if (!stack.isEmpty()) {
            cout << "Do you want to pop another element? (y/n): ";
            cin >> choice;
        }
        else {
            cout << "Stack is empty.\n";
            break;
        }
    }
    return 0;
}

