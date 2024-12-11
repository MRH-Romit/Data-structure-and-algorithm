// Step 1: Include necessary headers
#include <iostream>
using namespace std;

// Step 2: Define a Node structure
struct Node {
    int data;          // Data part of the node
    Node* next;        // Pointer to the next node

    // Constructor for easy initialization
    Node(int value) : data(value), next(nullptr) {}
};

// Step 3: Create a class for the LinkedList
class LinkedList {
private:
    Node* head;        // Pointer to the head of the list

public:
    // Constructor to initialize an empty list
    LinkedList() : head(nullptr) {}

    // Step 4: Add a node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Step 5: Display the linked list
    void display() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    // Step 6: Delete a node with a specific value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "The list is empty. Cannot delete." << endl;
            return;
        }

        // If the node to delete is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        // Find the node to delete
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        // If the node is not found
        if (temp->next == nullptr) {
            cout << "Value not found in the list." << endl;
            return;
        }

        // Delete the node
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    // Destructor to free allocated memory
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Step 7: Main function to demonstrate the LinkedList
int main() {
    LinkedList list;

    // Append values to the list
    list.append(10);
    list.append(20);
    list.append(30);

    // Display the list
    cout << "Linked List: ";
    list.display();

    // Delete a node
    cout << "Deleting 20..." << endl;
    list.deleteNode(20);

    // Display the list again
    cout << "Linked List after deletion: ";
    list.display();

    return 0;
}
