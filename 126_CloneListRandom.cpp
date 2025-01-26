#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *random;
  Node(int val)
  {
    data = val;
    next = NULL;
    random = NULL;
  }
};

void printLL(Node *head)
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
  Node *cloneLinkedList(Node *head)
  {
    // Write your code here
    Node *temp = head;
    while (!temp)
    {
      Node *n = new Node(temp->data);
      n->next = temp->next;
      temp->next = n;
      temp = n->next;
    }

    temp = head;
    Node *head2 = temp->next;
    while (temp != NULL)
    {
      if (temp->random == NULL)
      {
        temp->next->random = NULL;
      }
      else
        temp->next->random = temp->random->next;
      temp = temp->next->next;
    }
    // STEP 3 op list return krde
    temp = head;
    while (temp != NULL)
    {
      Node *temp2 = temp->next;
      temp->next = temp2->next;
      if (temp2->next)
        temp2->next = temp2->next->next;
      temp = temp->next;
    }
    return head2;
  }
};
int main()
{
  // Create an example linked list
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->random = head->next->next;       // 1 -> 3
  head->next->random = head;             // 2 -> 1
  head->next->next->random = head->next; // 3 -> 2

  cout << "Original List:" << endl;
  printLL(head);

  Solution solution;
  Node *clonedHead = solution.cloneLinkedList(head);

  cout << "\nCloned List:" << endl;
  printLL(clonedHead);

  return 0;
}