#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void deleteNode(Node*& head, int key) {
    Node* temp = head;
    Node* prev = nullptr;

    // If the node to be deleted is the head node
    if (temp != nullptr && temp->data == key) {
        head = temp->next;
        delete temp;
        return;
    }

    // Search for the node to be deleted, keeping track of the previous node
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not present in the linked list
    if (temp == nullptr) {
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;

    // Free the memory
    delete temp;
}


int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};
    head->next->next->next = new Node{4, nullptr};

    std::cout << "Original Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    int key = 3;
    deleteNode(head, key);

    std::cout << "Linked List after deleting node with key " << key << ": ";
    temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    // Don't forget to free the memory by deleting the remaining nodes
    temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
