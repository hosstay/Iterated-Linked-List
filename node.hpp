/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4

   This is a program implements a linked list for which a Node class is
   required to hold the data. This class is also implemented as a 
   template so that the class can be changed to any data type
   that is required
   
   Psudo Code
      Class Name: Node
      Data:
         data                           - generic type via template 
         link                           - link to other data items
      Mutator Functions:
         Node                           - constructor allowing for
                                          initilization of the node
         Node (input)                   - constructor allowing for
                                          initialization of the node
                                          by the user
         set_link                       - sets the nodes link to the
                                          pointer given as an argument
      Accessor Functions:
         get_link                       - returns the current link
         show_data                      - returns the current data
         
*/

#include <iostream>
using namespace std;

// Node class that holds a a generic template data item.
template <class Type>
class Node
{
   Type data;
   Node<Type> *link;

 public:
   Node ();
   Node (Type data);
   void set_link(Node<Type> *ptr)
   {
      link = ptr;
   }
   Node<Type> *get_link()
   {
      return link;
   }
   void show_data(void);
};

// Default constructor that initializes the data and link
template <class Type>
Node<Type>::Node()
{
   data = 0;
   link = NULL;

}

// Initialize the Node with given input
template <class Type>
Node<Type>::Node (Type d)
{
   data = d;
   link = NULL;
          
}

// Displays data held within node
template <class Type>
void Node<Type>::show_data(void)
{
   cout << "\n " << data;

}

