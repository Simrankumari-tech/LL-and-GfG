#include <bits/stdc++.h>
using namespace std;
// isme agr last m k se km b h to be reverse ho jayega
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
  Node *reverseKGroup(Node *head, int k)
  {
    // code here
    if (head == NULL)
      return NULL;
    // step 1. reverse first k nodes
    Node *n, *curr = head, *prev = NULL;
    int count = 0;
    while (curr != NULL and count < k)
    {
      n = curr->next;
      curr->next = prev;
      prev = curr;
      curr = n;
      count++;
    }
    if (n != NULL)
    {
      head->next = reverseKGroup(n, k);
    }
    return prev;
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
  int k = 3;
  Node *mid = sol.reverseKGroup(head, k);
  printLL(mid);
  return 0;
}
