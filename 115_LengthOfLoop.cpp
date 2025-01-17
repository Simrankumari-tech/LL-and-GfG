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
    cout << head->data;
    head = head->next;
  }
}

class Solution
{
public:
  int FindLength(Node *slow, Node *fast)
  {
    int cnt = 1;
    fast = fast->next;
    while (slow != fast)
    {
      cnt++;
      fast = fast->next;
    }
    return cnt;
  }
  // Function to find the length of a loop in the linked list.
  int countNodesinLoop(Node *head)
  {
    // Code here
    Node *slow = head, *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
      {
        return FindLength(slow, fast);
      }
    }
    return 0;
  }
};
int main()
{
  // Create a linked list
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  // Create a loop: 5 points back to 3
  head->next->next->next->next->next = head->next->next;

  Solution sol;
  int loopLength = sol.countNodesinLoop(head);

  if (loopLength > 0)
    cout << "Length of loop: " << loopLength << endl;
  else
    cout << "No loop detected" << endl;

  return 0;
}