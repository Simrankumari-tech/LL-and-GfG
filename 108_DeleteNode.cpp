#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
  int data;
  ListNode *next;
  ListNode(int val)
  {
    data = val;
    next = NULL;
  }
};

void printLL(ListNode *node)
{
  while (node != NULL)
  {
    cout << node->data;

    node = node->next;
  }
}
class Solution
{
public:
  void deleteNode(ListNode *node)
  {
    node->data = node->next->data;
    node->next = node->next->next;
  }
};
int main()
{
  // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  Solution sol;

  printLL(head);

  // Deleting the node with value 3 (assume we are given a pointer to this node)
  sol.deleteNode(head->next->next);

  cout << "After Deleting Node with Value 3: ";
  printLL(head);

  return 0;
}