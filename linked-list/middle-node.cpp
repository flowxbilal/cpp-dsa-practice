#include <iostream>
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
     node d={40,nullptr};
     node e={50,nullptr};
     a.next=&b;
     b.next=&c;
     c.next=&d;
     d.next=&e;
     node* head = &a;
     node* slow= head;
     node* fast= head;
     while(fast!= nullptr&& fast->next!= nullptr)
     {
        slow=slow->next;
        fast=fast->next->next;
     }
     cout<<slow->data;
   }