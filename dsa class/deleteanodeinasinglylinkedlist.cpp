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

    // Insert at the end (helper function)
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete node by value
    void deleteByValue(int val) {
        if (!head) return;

        // If head needs to be deleted
        if (head->data == val) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data != val) {
            temp = temp->next;
        }

        if (!temp->next) {
            cout << "Value " << val << " not found.\n";
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Delete node by position (1-based index)
    void deleteByPosition(int pos) {
        if (!head || pos <= 0) {
            cout << "Invalid position.\n";
            return;
        }

        // Delete head
        if (pos == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next; i++) {
            temp = temp->next;
        }

        if (!temp->next) {
            cout << "Position out of bounds.\n";
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    // Insert some nodes
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    cout << "Original List:\n";
    list.display();  // 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    // Delete by value
    list.deleteByValue(30);
    cout << "After deleting value 30:\n";
    list.display();  // 10 -> 20 -> 40 -> 50 -> NULL

    // Delete by position
    list.deleteByPosition(2);
    cout << "After deleting position 2:\n";
    list.display();  // 10 -> 40 -> 50 -> NULL

    // Delete head
    list.deleteByPosition(1);
    cout << "After deleting position 1 (head):\n";
    list.display();  // 40 -> 50 -> NULL

    return 0;
}
