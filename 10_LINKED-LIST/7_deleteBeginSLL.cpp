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
Node *deleteBegin(Node *head)
{
    if (head != NULL)
    {
        head = head->next;
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
}
int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        Node *newN = new Node(a);
        newN->next = head;
        head = newN;
    }
    head = deleteBegin(head);
    print(head);
}