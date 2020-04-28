#ifndef LISTA3_H2
#define LISTA3_H2

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
  // copy constructor
  lista(const lista& listobj) {
    head = new node;
    head->next = head;
    head->prev = head;
    for (node* np = listobj.head->next; np != listobj.head; np = np->next) {
      push_back(np->data);
    }
  }

  // destructor
  ~lista() {
    for (node* np = head; np->next != head; np = np->next) {
      node* _np = np->next;
      delete _np;
    }
    delete head;
  }

  // assignment operator overload
  lista& operator = (const lista & _list)
  {
    head = new node;
    head->next = head;
    head->prev = head;

    node *np;
    for (np = _list.head->next; np != _list.head; np = np->next)
      push_back(np->data);

    return *this;

  }

  void push_front(const int& val) {
    node *np = new node(val); 
    np->next = head->next; 
    np->prev = head;
    head->next->prev = np;
    head->next = np;
  }
  void push_back(const int& val) {
    node *np = new node(val);
    np->prev = head->prev;
    np->next = head;
    head->prev->next = np;
    head->prev = np;
  }
  void display() {
    for (node* np = head->next; np != head; np=np->next) 
      cout << np->data << endl; 
  }
private:
  node* head;
};
#endif
