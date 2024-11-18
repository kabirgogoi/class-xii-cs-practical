// AIM: To implement a queue using an array and perform insertion, deletion, and display operations

#include <iostream>

using namespace std;

class Queue
{
private:
    static const int MAX_SIZE = 50; // Maximum size of the queue
    int data[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() : front(-1), rear(-1) {} // Constructor initializing front and rear to -1

    // Method to insert an item in the queue
    int insert(int item)
    {
        if (isFull())
        {
            cout << "OVERFLOW!!! Aborting!!\n";
            return -1;
        }
        if (isEmpty())
        {
            front = 0; // Set front to 0 if inserting the first element
        }
        data[++rear] = item;
        return 0;
    }

    // Method to remove an item from the queue
    int remove()
    {
        if (isEmpty())
        {
            cout << "UNDERFLOW!!! Aborting!!\n";
            return -1;
        }
        int removedItem = data[front];
        if (front == rear)
        {
            front = rear = -1; // Queue becomes empty after removing the last item
        }
        else
        {
            front++;
        }
        cout << "\nElement deleted is: " << removedItem << endl;
        return 0;
    }

    // Method to display the queue from front to rear
    void display() const
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << data[i];
            if (i < rear)
                cout << " <- ";
        }
        cout << endl;
    }

    // Check if the queue is empty
    bool isEmpty() const
    {
        return front == -1;
    }

    // Check if the queue is full
    bool isFull() const
    {
        return rear == MAX_SIZE - 1;
    }
};

int main()
{
    Queue queue;
    int item;
    char choice;

    // Insertion phase using do...while loop
    do
    {
        cout << "Enter ITEM for insertion: ";
        cin >> item;

        if (queue.insert(item) == -1)
        {
            exit(1); // Exit the program if insert returns -1 (overflow)
        }

        cout << "\nNow the Queue (Front...to...Rear) is:\n";
        queue.display();

        cout << "\nWant to insert more elements? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Ask user to confirm deletion process
    cout << "\nDo you want to start the deletion process? (y/n): ";
    cin >> choice;
    if (choice != 'y' && choice != 'Y')
    {
        cout << "Deletion process aborted.\n";
        return 0; // Exit the program if user chooses not to delete
    }

    // Deletion phase using do...while loop
    cout << "Now deletion of elements begins:\n";
    do
    {
        if (queue.remove() == -1)
        {
            exit(1); // Exit the program if remove returns -1 (underflow)
        }

        cout << "Now the Queue (Front...to...Rear) is:\n";
        queue.display();

        cout << "\nWant to delete more elements? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
