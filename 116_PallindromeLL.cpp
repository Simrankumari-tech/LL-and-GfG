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

void printL(ListNode *head)
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
  bool isPalindrome(ListNode *head)
  {
    if (head == NULL or head->next == NULL)
    {
      return true;
    }
    // 1.find middle
    ListNode *slow = head, *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
    }

    // 2. reverse the second half
    ListNode *prev = NULL, *c = slow, *n;
    while (c != NULL)
    {
      n = c->next;
      c->next = prev;
      prev = c;
      c = n;
    }

    // 3. compare
    ListNode *left = head, *right = prev;
    while (right != NULL)
    {
      if (left->data != right->data)
        return false;
      left = left->next;
      right = right->next;
    }
    return true;
  }
};
int main()
{
  // Example to test the solution
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(2);
  head->next->next->next = new ListNode(1);

  Solution sol;
  if (sol.isPalindrome(head))
  {
    cout << "The list is a palindrome." << endl;
  }
  else
  {
    cout << "The list is not a palindrome." << endl;
  }

  return 0;
}