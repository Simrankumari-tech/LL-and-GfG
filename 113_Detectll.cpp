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
void printll(ListNode *head)
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
  bool hasCycle(ListNode *head)
  {
    ListNode *slow = head, *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast)
        return true;
    }
    return false;
  }
};
int main()
{
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  printll(head);
  cout << endl;
  Solution sol;
  bool middle = sol.hasCycle(head);
  if (middle)
    cout << "true";
  else
    cout << "false";

  return 0;
}