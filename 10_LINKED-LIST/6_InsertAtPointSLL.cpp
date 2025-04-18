#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *insertAtPos(Node *head, int x, int p)
{
    Node *temp = new Node(x);
    Node *curr = head;
    if (p == 1)
    {
        temp->next = head;
        return temp;
    }
    else
    {
        p = p - 2;
        while (curr != NULL && p > 0)
        {
            curr = curr->next;
            p--;
        }
        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    int p;
    cin >> p;
    head = insertAtPos(head, 60, p);
    print(head);
}
