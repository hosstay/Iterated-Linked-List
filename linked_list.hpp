/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #6

   This program implements a linked list class in which a users input
   is made into a node which is inserted at the end of the list. When
   given the command it goes through the nodes and outputs their data.
   This class has been implemented with templates to allow it to be used
   with any data types.

   Psuedo Code
      Class Name: Linked_list
      Data:
         head                 - pointer to the first item in the list
         tail                 - pointer to the last item in the list
      Mutator Functions:
         Linked_list          - defualt initialization of the pointers
         insert_node          - inserts a node to the end of the list
      Accessor Functions:
         traverse             - iterates through the list and gets data

*/

#include "node.hpp"
#include <cassert>

//prototyping classes
template <class Type> class List;
template <class Type> class Iterator;

/*
 * Linked list class
 */
template <class Type>
class Linked_list
{
   Node<Type> *head, *tail;
 public:
   Linked_list();
   bool insert_node(Type data); 
   void traverse(Iterator<Type> *iter);
   Node<Type> *get_head()
   {
      return head;
   }
      
};

// Constructor to initialize the linked list.
template <class Type>
Linked_list<Type>::Linked_list()
{
   head = NULL;
   tail = NULL;

}

// Insert a node in the list.
template <class Type>
bool Linked_list<Type>::insert_node(Type data)
{
   // Create a node.
   Node<Type> *node_ptr = new Node<Type>(data);

   // If there are no entries in the linked list add it to the head.
   if (head == NULL)
   {
      tail = node_ptr;
      head = node_ptr;
   }
   else
   {
      //otherwise just add it to the end of the list.
      tail->set_link(node_ptr);
      tail = node_ptr;
   }
   
   return true;
}

// Go through the entire list. Call the node method to show the data.
template <class Type>
void Linked_list<Type>::traverse(Iterator<Type> *iter)
{
   iter->set_position(tail);
   while (iter->check_position())
   {
      iter->get();
      iter->next();
   }     
}

/*
 * iterator class
 */

// Iterator class
template <class Type>
class Iterator
{
   Node<Type> *position;
 public:
   Iterator();
   Iterator(Linked_list<Type> a);
   void get();
   void next();
   void set_position(Node<Type> *ptr)
   {
      position = ptr;

   }
   bool check_position()
   {
      if(position == NULL)
         return 0;
      else
         return 1;

   }
      
};

//constructs an iterator that does not point into an list.
template <class Type>
Iterator<Type>::Iterator()
{
   position = NULL;

}

//constructs an iterator that points to the tail of theentered list.
template <class Type>
Iterator<Type>::Iterator(Linked_list<Type> a)
{
   position = a.get_head();
   cout<<"initial position: "<<position<<endl;

}

//shows the data in the current iter position using the
//function in the node
template <class Type>
void Iterator<Type>::get()
{
   assert(position != NULL);
   position->show_data();

}

//advances the iterator to the current nodes link.
template <class Type>
void Iterator<Type>::next()
{
   if (position != NULL)
      position = position->get_link();
   cout<<"\nnext position: "<<position<<endl;

}
