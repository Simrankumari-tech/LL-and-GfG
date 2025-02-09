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
  vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
  {
    // code here
    Node *first = head;
    Node *last = head;
    while (last->next != NULL)
    {
      last = last->next;
    }

    vector<pair<int, int>> ans;
    while (first != last and first->prev != last)
    {
      if (first->data + last->data > target)
      {
        last = last->prev;
      }
      else if (first->data + last->data == target)
      {
        ans.push_back({first->data, last->data});
        first = first->next; // Move 'first' forward
        last = last->prev;
      }
      else
      {
        first = first->next;
      }
    }
    return ans;
  }
};