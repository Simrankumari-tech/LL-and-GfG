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
  ListNode *mergelist(ListNode *l1, ListNode *l2)
  {
    if (!l1)
      return l2;
    if (!l2)
      return l1;

    if (l1->data < l2->data)
    {
      l1->next = mergelist(l1->next, l2);
      return l1;
    }
    else
    {
      l2->next = mergelist(l1, l2->next);
      return l2;
    }
  }

  ListNode *Sortll(ListNode *head)
  {
    if (head == NULL or head->next == NULL)
      return head;
    // 1. middle
    ListNode *prev = NULL;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }
    prev->next = NULL;

    ListNode *l1 = Sortll(head);
    ListNode *l2 = Sortll(slow);
    return mergelist(l1, l2);
  }
};
int main()
{
  ListNode *head = new ListNode(4);
  head->next = new ListNode(2);
  head->next->next = new ListNode(1);
  head->next->next->next = new ListNode(3);
  head->next->next->next->next = new ListNode(0);

  printll(head);
  Solution sol;

  ListNode *mid = sol.Sortll(head);
  printll(mid);
  return 0;
}