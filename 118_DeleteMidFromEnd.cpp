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
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    ListNode *slow = head;
    ListNode *fast = head;
    for (int i = 0; i < n; i++)
    {
      fast = fast->next;
    }

    if (fast == NULL)
      return head->next;
    while (fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next;
    }
    ListNode *dltNode = slow->next;
    slow->next = slow->next->next;
    free(dltNode);
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
  int n = 2;
  ListNode *mid = sol.removeNthFromEnd(head, n);
  printll(mid);
  return 0;
}