#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;
  Node(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
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
  Node *removeDuplicates(struct Node *head)
  {

    Node *current = head;

    while (current != NULL and current->next != NULL)
    {
      Node *nextNode = current->next;

      // Remove duplicates for the current node
      while (nextNode != NULL && nextNode->data == current->data)
      {
        Node *duplicate = nextNode;
        nextNode = nextNode->next;

        delete duplicate;
      }
      current->next = nextNode;

      if (nextNode != NULL)
        nextNode->prev = current;

      current = current->next;
    }

    return head;
  }
};
int main()
{
  Solution obj;
  Node *head = new Node(4);
  head->next = new Node(4);
  head->next->prev = head;
  head->next->next = new Node(5);
  head->next->next->prev = head->next;

  Node *mid = obj.removeDuplicates(head);
  printLL(mid); // Output:  2  5 NULL
  return 0;
}
