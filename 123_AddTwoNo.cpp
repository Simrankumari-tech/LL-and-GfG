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
    cout << head->data << " ";
    head = head->next;
  }
  cout << "NULL";
}

class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {

    ListNode *l3 = new ListNode(0);
    int carry = 0;
    ListNode *head = l3; // l3 last m chla jayega put krte krte to isye return krege head
    while (l1 != NULL and l2 != NULL)
    {
      int sum = l1->data + l2->data + carry; // 16
      carry = sum / 10;                      // 1
      l3->next = new ListNode(sum % 10);     // 16% 10 = 6
      l3 = l3->next;
      l1 = l1->next;
      l2 = l2->next;
    }

    while (l1)
    {
      int sum = l1->data + carry;        // 16
      carry = sum / 10;                  // 1
      l3->next = new ListNode(sum % 10); // 16% 10 = 6
      l3 = l3->next;

      l1 = l1->next;
    }
    while (l2)
    {
      int sum = l2->data + carry;        // 16
      carry = sum / 10;                  // 1
      l3->next = new ListNode(sum % 10); // 16% 10 = 6
      l3 = l3->next;

      l2 = l2->next;
    }
    if (carry)
    {
      l3->next = new ListNode(carry);
    }
    return head->next; // kyuki 0 thodi print krna h
  }
};
int main()
{
  Solution sol;

  // Create List A: [4, 1]
  ListNode *l1 = new ListNode(4);
  l1->next = new ListNode(1);

  // Create List B: [5, 6]
  ListNode *l2 = new ListNode(5);
  l2->next = new ListNode(6);

  ListNode *mid = sol.addTwoNumbers(l1, l2);
  printLL(mid);

  return 0;
}
