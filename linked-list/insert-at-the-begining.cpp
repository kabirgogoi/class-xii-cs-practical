// Aim: To insert an element at the beginning of a linked list

#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insert(Node*& head, int data) {
    // Allocate memory for a new node
    Node* newNode = new Node();
    // Assign data to the new node
    newNode->data = data;
    // Point the new node's next to the current head
    newNode->next = head;
    // Make the new node the new head
    head = newNode;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = nullptr; // Initialize the head of the list
    char choice;

    do {
        int item;
        cout << "Enter item for insertion: ";
        cin >> item;

        // Insert the item at the beginning
        insert(head, item);

        // Display the linked list
        displayList(head);

        cout << "Want to insert more elements? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

/*
Output:

Enter item for insertion: 10
10 -> NULL
Want to insert more elements? (y/n): y
Enter item for insertion: 20
20 -> 10 -> NULL
Want to insert more elements? (y/n): y
Enter item for insertion: 30
30 -> 20 -> 10 -> NULL
Want to insert more elements? (y/n): y
Enter item for insertion: 40
40 -> 30 -> 20 -> 10 -> NULL
Want to insert more elements? (y/n): n

*/



