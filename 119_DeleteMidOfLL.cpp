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
  ListNode *deletemid(ListNode *head)
  {

    if (head == NULL or head->next == NULL)
    {

      return NULL;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev = NULL;

    while (fast != NULL and fast->next != NULL)
    {
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }

    prev->next = slow->next;
    delete slow;

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

  ListNode *mid = sol.deletemid(head);
  printll(mid);
  return 0;
}