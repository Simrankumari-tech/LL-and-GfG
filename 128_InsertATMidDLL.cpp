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
  Node *addNode(Node *head, int pos, int data)
  {
    // code here
    if (head == NULL)
      return NULL;
    Node *temp = head;
    for (int i = 0; i < pos; i++)
    {
      temp = temp->next;
    }

    Node *n = new Node(data);
    if (temp->next == NULL)
    {
      temp->next = n;
      n->prev = temp;
    }
    else
    {
      temp->next->prev = n;
      n->next = temp->next;
      temp->next = n;
      n->prev = temp;
    }
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

  int pos = 2;
  int data = 6;
  Node *mid = obj.addNode(head, pos, data);
  printLL(mid); // Output:  2  4 5 NULL
  return 0;
}
