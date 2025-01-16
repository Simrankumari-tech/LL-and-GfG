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
  ListNode *reverseList(ListNode *head)
  {
    ListNode *c = head, *n, *p = NULL;
    while (c != NULL)
    {
      n = c->next;
      c->next = p;
      p = c;
      c = n;
    }
    return p;
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
  ListNode *middle = sol.reverseList(head);
  printll(middle);
  return 0;
}