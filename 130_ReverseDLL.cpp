#include <bits/stdc++.h>
using namespace std;

class DLLNode
{
public:
  int data;
  DLLNode *next;
  DLLNode *prev;
  DLLNode(int val)
  {
    data = val;
    next = NULL;
    prev = NULL;
  }
};

void printLL(DLLNode *head)
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
  DLLNode *reverseDLL(DLLNode *head)
  {
    DLLNode *prev = NULL;
    DLLNode *temp = head;
    DLLNode *next = NULL;
    if (head == NULL or head->next == NULL)
      return head;
    while (temp != NULL)
    {
      next = temp->next;
      temp->next = prev;
      temp->prev = next;
      prev = temp;
      temp = next;
    }
    return prev;
  }
};
int main()
{
  Solution obj;
  DLLNode *head = new DLLNode(2);
  head->next = new DLLNode(4);
  head->next->prev = head;
  head->next->next = new DLLNode(5);
  head->next->next->prev = head->next;

  DLLNode *mid = obj.reverseDLL(head);
  printLL(mid);
  return 0;
}
