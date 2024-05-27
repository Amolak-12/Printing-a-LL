#include <iostream>
using namespace std;

class Node{
public:
    int data;
   Node* next;

    Node () {
     data = 0;
     next = NULL;
    }
    Node (int data) {
     this->data = data;
     next = NULL;
    }
};

void print (Node* &head) {
  //Making a temporary node for traversing
  Node* temp = head;
  //Running loop for printing
  while (temp != NULL) {
    //Printing the data in the current node
    cout << temp->data << " ";
    //Moving to the next node
    temp = temp->next;
  }
}
int main() {

  //Creating nodes for making a linked list
  //All nodes are been made in the heap memory

  Node *first = new Node(10); // Created 1st
  Node *second = new Node(20); // Created 2nd
  Node *third = new Node(30); // Created 3rd
  Node *fourth = new Node(40); // Created 4th
  Node *fifth = new Node(50); // Created 5th
  Node *sixth = new Node(60); // Created 6th

  //Maked a Linked list 
  first->next = second; //linking 1st with 2nd
  second->next = third; //linking 2nd with 3rd
  third->next = fourth; //linking 3rd with 4th
  fourth->next = fifth; //linking 4th with 5th
  fifth->next = sixth;  //linking 5th with 6th

  // Printing the Linked list
  cout << "Printing all the nodes of the Linked list" << endl;
  //calling print function
  print(first);
}