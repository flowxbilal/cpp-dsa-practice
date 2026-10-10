#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main()
{
    node a = {10, nullptr};
    node b = {20, nullptr};
    node c = {30, nullptr};

    a.next = &b;
    b.next = &c;

    a.next = b.next;

    node* temp = &a;

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}