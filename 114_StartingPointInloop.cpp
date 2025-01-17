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

void printLL(ListNode *head)
{
  while (head != NULL)
  {
    cout << head->data;
    head = head->next;
  }
  cout << "NULL";
}
class Solution
{
public:
  ListNode *detectCycle(ListNode *head)
  {
    ListNode *slow = head, *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
      {
        slow = head;
        while (slow != fast)
        {
          slow = slow->next;
          fast = fast->next;
        }
        return slow;
      }
    }
    return NULL;
  }
};
int main()
{
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  printLL(head);
  cout << endl;

  // Create a cycle: 5 points back to 2
  head->next->next->next->next->next = head->next;
  Solution sol;

  ListNode *middle = sol.detectCycle(head);
  if (middle)
    cout << "true";
  else
    cout << "false";

  return 0;
}