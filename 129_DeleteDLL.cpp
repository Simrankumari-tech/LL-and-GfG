#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
  }
};

void printLL(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << "NULL";
}
class Solution
{
public:
  Node *deleteNode(Node *head, int x)
  {
    Node *del = head;
    x = x - 1;
    while (x--)
    {
      del = del->next;
    }
    if (head == NULL or del == NULL) // agr phli node h to
      return NULL;
    if (head == del)
      head = del->next;
    if (del->next != NULL) // agar mid node h toh
    {
      del->next->prev = del->prev;
    }

    if (del->prev != NULL)
    {
      del->prev->next = del->next;
    }
    delete del;
    return head;
  }
};
int main()
{
  Solution obj;
  Node *head = new Node(2);
  head->next = new Node(4);
  head->next->prev = head;
  head->next->next = new Node(5);
  head->next->next->prev = head->next;

  int x = 2;

  Node *mid = obj.deleteNode(head, x);
  printLL(mid); // Output:  2  5 NULL
  return 0;
}
