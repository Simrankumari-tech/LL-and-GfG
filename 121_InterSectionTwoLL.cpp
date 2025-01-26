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
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    if (headA == NULL || headB == NULL)
      return NULL; // Check if either list is empty

    ListNode *p1 = headA;
    ListNode *p2 = headB;

    // Traverse both lists. Once a pointer reaches the end, switch it to the other list.
    while (p1 != p2)
    {
      p1 = (p1 == NULL) ? headB : p1->next; // If p1 is NULL, switch to headB
      p2 = (p2 == NULL) ? headA : p2->next; // If p2 is NULL, switch to headA
    }

    // If both pointers meet, return the intersection node; otherwise, return NULL
    return p1;
  }
};

int main()
{
  Solution sol;

  // Create List A: [4, 1, 8, 4, 5]
  ListNode *headA = new ListNode(4);
  headA->next = new ListNode(1);
  headA->next->next = new ListNode(8);
  headA->next->next->next = new ListNode(4);
  headA->next->next->next->next = new ListNode(5);

  // Create List B: [5, 6, 1, 8, 4, 5]
  ListNode *headB = new ListNode(5);
  headB->next = new ListNode(6);
  headB->next->next = new ListNode(1);
  headB->next->next->next = new ListNode(8);
  headB->next->next->next->next = new ListNode(4);
  headB->next->next->next->next->next = new ListNode(5);

  // Create intersection: List A and List B intersect at node with value 8
  headB->next->next->next->next->next = headA->next->next; // Intersection starts at node with value 8

  // Find the intersection node
  ListNode *mid = sol.getIntersectionNode(headA, headB);

  if (mid != NULL)
    cout << "Intersection at node with value: " << mid->data << endl;
  else
    cout << "No intersection found." << endl;

  return 0;
}
