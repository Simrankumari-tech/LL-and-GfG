#include <bits/stdc++.h>
using namespace std;

// agar k s km h tb ni hoga reverse
class ListNode
{
public:
  int data;
  ListNode *next;
  ListNode(int val)
  {
    data = val;
    next = nullptr;
  }
};

void printLL(ListNode *head)
{
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << "NULL";
}
class Solution
{
public:
  ListNode *reverseKGroup(ListNode *head, int k)
  {
    // Count the nodes in the current segment
    ListNode *temp = head;
    int count = 0;
    while (temp != nullptr && count < k)
    {
      temp = temp->next;
      count++;
    }

    // If we have fewer than k nodes, return the list as is
    if (count < k)
    {
      return head;
    }

    // Reverse the first k nodes
    ListNode *prev = nullptr;
    ListNode *curr = head;
    ListNode *next = nullptr;
    for (int i = 0; i < k; i++)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }

    // Recursively process the remaining nodes
    head->next = reverseKGroup(next, k);

    // Return the new head of the reversed group
    return prev;
  }
};
int main()
{
  Solution sol;
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);
  int k = 3;
  ListNode *mid = sol.reverseKGroup(head, k);
  printLL(mid);
  return 0;
}
