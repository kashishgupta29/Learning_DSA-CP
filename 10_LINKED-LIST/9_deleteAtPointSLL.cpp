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
Node *deleteAtPos(Node *head, int pos)
{
    if (head != NULL)
    {
        Node *curr = head;
        if (pos == 1)
            head = head->next;
        else
        {
            while (curr->next->next != NULL && pos > 2)
            {
                curr = curr->next;
                pos--;
            }
            curr->next = curr->next->next;
        }
    }
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        Node *newNode = new Node(a);
        newNode->next = head;
        head = newNode;
    }
    int pos;
    cin >> pos;
    print(head);
    head = deleteAtPos(head, pos);
    print(head);
}