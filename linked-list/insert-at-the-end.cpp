// Aim: To insert an element at the end of a linked list

#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the linked list
void insert(Node*& head, int data) {
    // Allocate memory for a new node
    Node* newNode = new Node();
    // Assign data to the new node
    newNode->data = data;
    // The new node will point to nullptr as it is the last node
    newNode->next = nullptr;

    // If the linked list is empty, make the new node the head
    if (head == nullptr) {
        head = newNode;
    }
    else {
        // Traverse the list to find the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Link the last node to the new node
        temp->next = newNode;
    }
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

        // Insert the item at the end
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
10 -> 20 -> NULL
Want to insert more elements? (y/n): y
Enter item for insertion: 30
10 -> 20 -> 30 -> NULL
Want to insert more elements? (y/n): y
Enter item for insertion: 40
10 -> 20 -> 30 -> 40 -> NULL
Want to insert more elements? (y/n): n
*/