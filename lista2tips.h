/*
 * A skeleton for the doubly linked list homework due Friday April 3
 * Pay spetial attention to how it is initialized in the default constructor
 * Add one member function
 *  void push_back (const int& val);
 * You will test this function in your driver program too
 * I expect proper documentation in all your files
*/

// File: lista.h
// List declaration and implementation

#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

struct node {
  node(){};
  node(const int val):data(val){};
  int data;
  node* next;
  node* prev;
};

class lista {
public:
  lista() { head = new node; head->next = head; head->prev=head;}

  void push_front(const int& val) {
    node *np = new node(val); 
    np->next = head->next; 
    np->prev = head;
    head->next->prev = np;
    head->next = np;
  }

  void push_back(const int& val) {}
  void display() {} 

private:
  node* head;
};

#endif
