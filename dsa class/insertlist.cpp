#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;
    
public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at the beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert at a specific position (1-based index)
    void insertAtPosition(int val, int pos) {
        if (pos <= 0) {
            cout << "Invalid position.\n";
            return;
        }

        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        for (int i = 1; i < pos - 1; i++) {
            if (temp == nullptr) {
                cout << "Position out of bounds.\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    // Insert at the beginning
    list.insertAtBeginning(30);  // List: 30
    list.insertAtBeginning(20);  // List: 20 -> 30
    list.insertAtBeginning(10);  // List: 10 -> 20 -> 30

    // Insert at the end
    list.insertAtEnd(40);         // List: 10 -> 20 -> 30 -> 40
    list.insertAtEnd(50);         // List: 10 -> 20 -> 30 -> 40 -> 50

    // Insert at specific position
    list.insertAtPosition(25, 3); // List: 10 -> 20 -> 25 -> 30 -> 40 -> 50
    list.insertAtPosition(5, 1);  // List: 5 -> 10 -> 20 -> 25 -> 30 -> 40 -> 50

    // Display the list
    list.display();

    return 0;
}
