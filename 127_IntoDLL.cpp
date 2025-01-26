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
  Node *constructDLL(vector<int> &arr)
  {
    // code here
    if (arr.empty())
      return NULL;

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
      Node *temp = new Node(arr[i]);
      prev->next = temp;
      temp->prev = prev;
      prev = temp;
    }
    return head;
  }
};
int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Solution obj;
  Node *head = obj.constructDLL(arr);
  printLL(head); // Output: 1 2 3 4 5 NULL
  return 0;
}
