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
  // Function to sort a linked list of 0s, 1s and 2s.
  Node *segregate(Node *head)
  {
    if (!head || !head->next)
      return head;

    // Add code here
    int count0 = 0, count1 = 0, count2 = 0;
    Node *temp = head;
    while (temp != NULL)
    {
      if (temp->data == 0)
        count0++;
      else if (temp->data == 1)
        count1++;
      else
        count2++;
      temp = temp->next;
    }

    temp = head;
    while (count0--)
    {
      temp->data = 0;
      temp = temp->next;
    }
    while (count1--)
    {
      temp->data = 1;
      temp = temp->next;
    }

    while (count2--)
    {
      temp->data = 2;
      temp = temp->next;
    }
    return head;
  }
};
int main()
{
  Solution sol;

  Node *head = new Node(0);
  head->next = new Node(2);
  head->next->next = new Node(1);
  head->next->next->next = new Node(2);

  Node *mid = sol.segregate(head);
  printLL(mid);
  return 0;
}
