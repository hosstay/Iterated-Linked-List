/*****************************************************************************
   Taylor Hoss
   X432Z869
   Program #4

   This is a program that uses a template version of node and linked list
   such that it can, if the program writer chooses, create a linked list
   of any data type. This main file will simply show how this can be
   done.
   
*/

#include "linked_list.hpp"
#include <string>

int main (void)
{
  
   // Create empty lists of each type
   Linked_list<double> doubleList;
   Linked_list<long> longList;
   Linked_list<int> intList;
   Linked_list<char> charList;
   Linked_list<float> floatList;
   Linked_list<string> stringList;

   //adding nodes and data
   doubleList.insert_node(12.3);
   doubleList.insert_node(37.3);
   doubleList.insert_node(1);
   doubleList.insert_node(2.9);
   doubleList.insert_node(3);
   
   longList.insert_node(42);
   longList.insert_node(39);
   longList.insert_node(90);
   longList.insert_node(34);
   longList.insert_node(29);

   intList.insert_node(10);
   intList.insert_node(17);
   intList.insert_node(23);
   intList.insert_node(9);
   intList.insert_node(21);

   charList.insert_node('a');
   charList.insert_node('z');
   charList.insert_node('g');
   charList.insert_node('x');
   charList.insert_node('o');

   floatList.insert_node(16.7);
   floatList.insert_node(19.5);
   floatList.insert_node(29.03);
   floatList.insert_node(9.1);
   floatList.insert_node(0.07);

   stringList.insert_node("mermaid");
   stringList.insert_node("brando");
   stringList.insert_node("spiegal");
   stringList.insert_node("poltergeist");
   stringList.insert_node("homemade");

   //starts up the iterators
   Iterator doublePos(doubleList);
   Iterator longPos(longList);
   Iterator intPos(intList);
   Iterator charPos(charList);
   Iterator stringPos(stringList);

   //printing data
   cout<<"Retrieved data:\n\n";
   cout<<"Double Data: \n";
   doubleList.traverse();
   cout<<"\n\nlong Data: \n";
   longList.traverse();
   cout<<"\n\nInt Data: \n";
   intList.traverse();
   cout<<"\n\nChar Data: \n";
   charList.traverse();
   cout<<"\n\nFloat Data: \n";
   floatList.traverse();
   cout<<"\n\nString Data: \n";
   stringList.traverse(); 
   
   return 0;
}}
