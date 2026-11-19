
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

Node* create(int arr[], int x) {
    Node* head = nullptr;
    Node* temp = nullptr;
    int size=x;

    for(int i = 0; i < size; i++) {
        if(head == nullptr) {
            head = new Node(arr[i]);
            temp = head;
        }
        else {
            temp->next = new Node(arr[i]);
            temp = temp->next;
        }
    }
    return head;
}

void insert(Node*&  head, int position, int value) {
    Node* newNode = new Node(value);

    if(position == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* temp = head;

        for(int i = 1; i < position-1; i++)
            temp = temp->next;

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deletion(Node*& head, int position) {
    Node* temp = head;

    if(position == 1) {
        head = head->next;
        delete temp;
    }
    else {
        for(int i = 1; i < position-1; i++)
            temp = temp->next;

        Node* temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
}

void display(Node* head) {
    Node* temp = head;

    while(temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}

int main() {
    int arr[5] = {10, 15, 20, 30, 40};

    Node* head = create(arr, 5);
    display(head);

    int position, value;

    cout << "\nEnter insertion position: ";
    cin >> position;
    cout << "Enter value: ";
    cin >> value;

    insert(head, position, value);
    display(head);

    cout << "\nEnter deletion position: ";
    cin >> position;

    deletion(head, position);
    display(head);
}
