#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
void printLL(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ->";
    head = head->next;
  }
}
class Solution
{
public:
  Node *insertAtfront(Node *head, int x)
  {
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
  }

  Node *insertAtEnd(Node *head, int x)
  {
    Node *temp = new Node(x);
    Node *current = head;

    while (!head)
      return temp;
    while (current->next != NULL)
    {
      current = current->next;
    }
    current->next = temp;
    return head;
  }

  Node *insertAtmid(Node *head, int x)
  {
    Node *temp = head;
    int pos = 3;
    for (int i = 0; i < pos - 1; i++)
    {
      temp = temp->next;
    }
    Node *n = new Node(x);
    n->next = temp->next;
    temp->next = n;
    return head;
  }
};
int main()
{
  Solution sol;
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  int x = 6;
  head = sol.insertAtmid(head, x);
  printLL(head);
  return 0;
}