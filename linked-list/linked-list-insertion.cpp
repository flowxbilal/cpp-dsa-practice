#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
int main()
{
    node a={10,nullptr};
    node b={20,nullptr};
    node c={30,nullptr};
    node d={25,nullptr};
    a.next=&b;
    b.next=&d;
    d.next=&c;
    node* move=&a;
    while(move!=nullptr)
    {
        cout<<move->data<<"  ";
        move=move->next;

    }

}
