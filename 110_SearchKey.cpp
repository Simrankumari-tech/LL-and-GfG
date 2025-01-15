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

// Function to print the linked list
void printll(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " "; // Added space between elements for readability
    head = head->next;
  }
  cout << endl; // To move to the next line after printing the list
}

class Solution
{
public:
  // Function to search for a key in the linked list
  bool searchKey(Node *head, int key)
  {
    while (head != NULL)
    {
      if (head->data == key)
      {
        return true; // Key found
      }
      head = head->next;
    }
    return false; // Key not found
  }
};

int main()
{
  // Create a sample linked list
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);

  int key = 2; // Set the key to search

  // Print the linked list
  printll(head);

  // Search for the key using Solution class
  Solution obj;
  if (obj.searchKey(head, key))
  {
    cout << "true" << endl; // Key is found
  }
  else
  {
    cout << "false" << endl; // Key is not found
  }

  return 0; // End of program
}
