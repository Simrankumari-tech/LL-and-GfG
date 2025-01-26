#include <bits/stdc++.h>
using namespace std;

struct Node
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

void printLL(Node *head_ref)
{
  while (head_ref != NULL)
  {
    cout << head_ref->data << " ";
    head_ref = head_ref->next;
  }
  cout << "NULL" << endl;
}

class Solution
{
public:
  void deleteAllOccurOfX(Node **head_ref, int x)
  {
    Node *current = *head_ref;

    while (current != NULL)
    {
      if (current->data == x)
      {
        Node *toDelete = current;

        // If the node to delete is the head
        if (current == *head_ref)
        {
          *head_ref = current->next;
          if (*head_ref != NULL)
            (*head_ref)->prev = NULL;
        }
        else
        {
          // Update the previous node's next pointer
          if (current->prev != NULL)
            current->prev->next = current->next;

          // Update the next node's previous pointer
          if (current->next != NULL)
            current->next->prev = current->prev;
        }

        current = current->next;
        delete toDelete; // Free the memory of the deleted node
      }
      else
      {
        current = current->next;
      }
    }
  }
};
int main()
{
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->prev = head;
  head->next->next = new Node(10);
  head->next->next->prev = head->next;
  head->next->next->next = new Node(30);
  head->next->next->next->prev = head->next->next;

  cout << "Original List: ";
  printLL(head);

  Solution obj;
  obj.deleteAllOccurOfX(&head, 10);

  cout << "Modified List: ";
  printLL(head);

  return 0;
}
