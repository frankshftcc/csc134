#include <iostream>
#include "SinglyLinkedList.h"
using namespace std;

/*
M6T4
CSC 134
franksh
12/6/2023
*/

int main() {
   LinkedList char_list;
   Node* node_chicken = new Node("Chicken");
   Node* node_turkey = new Node("Turkey");
   Node* node_duck = new Node ("Duck");
   Node* node_quail = new Node ("Quail");

  // append adds things to the tail
  // prepend adds them to the head
   char_list.Append(node_chicken);   
   char_list.Append(node_duck);
   char_list.Append(node_quail); 

  // insert second NODE (turkey) between the first and third
  char_list.InsertAfter(node_chicken, node_turkey);


   // Output list
   cout << "List after adding nodes: ";
   char_list.PrintList(cout);

      
  // remove quail
  char_list.RemoveAfter(node_duck);

  // output
  cout << "List after removing a node: " ;
  char_list.PrintList(cout);

   
   // LinkedList destructor frees remaining nodes
}