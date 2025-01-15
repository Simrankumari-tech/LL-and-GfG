#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
class Solution
{
public:
  Node *constructLL(vector<int> &arr)
  {
    // code here
    if (arr.empty())
      return NULL;
    Node *head = new Node(arr[0]);
    Node *n = head;

    for (int i = 1; i < arr.size(); i++)
    {
      n->next = new Node(arr[i]);
      n = n->next;
    }
    return head;
  }
};
void printll(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " -> ";
    head = head->next;
  }
}
int main()
{
  Solution sol;
  vector<int> arr = {1, 2, 3, 4, 5};
  Node *head = sol.constructLL(arr);

  printll(head);
  return 0;
}