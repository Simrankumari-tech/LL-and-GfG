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
    cout << head->data << " ";
    head = head->next;
  }
  cout << "NULL";
}

class Solution
{
public:
  Node *reverse(Node *head)
  {
    // Your Code here
    // return head of list after adding one
    Node *p = NULL;
    Node *c = head;
    Node *n;
    while (c != NULL)
    {
      n = c->next;
      c->next = p;
      p = c;
      c = n;
    }
    return p;
  }
  Node *addOne(Node *head)
  {
    head = reverse(head);
    Node *curr = head, *prev = NULL;

    int carry = 1;
    while (curr != NULL)
    {
      int sum = curr->data + carry;
      curr->data = sum % 10;
      carry = sum / 10;
      prev = curr;
      curr = curr->next;
    }

    if (carry != 0)
    {
      prev->next = new Node(carry);
    }
    head = reverse(head);
    return head;
  }
};
int main()
{
  Solution sol;

  Node *head = new Node(1);
  head->next = new Node(1);
  head->next->next = new Node(1);

  Node *mid = sol.addOne(head);
  printLL(mid);
  return 0;
}
