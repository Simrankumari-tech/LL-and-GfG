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
  cout << "NULL";
}
class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
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
  ListNode *middle = sol.middleNode(head);
  printll(middle);
  return 0;
}