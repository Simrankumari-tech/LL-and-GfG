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
    cout << head->data << "-> ";
    head = head->next;
  }
  cout << "NULL" << endl;
}
class Solution
{
public:
  ListNode *oddEvenList(ListNode *head)
  {
    if (!head || !head->next)
      return head;
    ListNode *odd = head, *even = head->next, *evenhead = even;
    while (even != NULL and even->next != NULL)
    {
      odd->next = even->next;
      odd = odd->next;
      even->next = odd->next;
      even = even->next;
    }
    odd->next = evenhead;
    return head;
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
  Solution sol;
  ListNode *mid = sol.oddEvenList(head);
  printll(mid);
  return 0;
}