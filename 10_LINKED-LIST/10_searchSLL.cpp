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
int IterativeSearchList(Node *head, int x)
{
    int count = 1;
    while (head != NULL)
    {
        if (head->data == x)
        {
            return count;
        }
        count++;
        head = head->next;
    }
    return -1;
}
int RecursiveSearchList(Node *head, int x)
{
    if (head == NULL)
        return -1;
    if (head->data == x)
        return 1;
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
    int a;
    cin >> a;
    cout << IterativeSearchList(head, a) << endl;
    cout << RecursiveSearchList(head, a);
}