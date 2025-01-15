#include <bits/stdc++.h>
using namespace std;
struct Node
{

  int data;
  struct Node *next;
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
void printLL(struct Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ->";
    head = head->next;
  }
}

class Solution
{
public:
  // Function to count nodes of a linked list.
  int getCount(struct Node *head)
  {

    // Code here
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
      temp = temp->next;
      count++;
    }
    return count;
  }
};

int main()
{
  // Create a sample linked list
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);

  // Print the linked list
  printLL(head);

  // Count the nodes using Solution class
  Solution obj;
  cout << "Count of nodes: " << obj.getCount(head) << endl;

  return 0;
}