#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

struct node {
  node(){};
  node(const int val):data(val){};
  int data;
  node* next;
};

class lista {
public:
  lista() { head = new node; tail = new node; head->next = tail;}
  lista(const lista& listobj) {
    head = new node;
    tail = new node;
    head->next = tail;
    for (node* np = listobj.head->next; np != listobj.tail; np = np->next) {
      push_back(np->data);
    }
  }

  ~lista() {
    for (node* np = head; np->next != tail; np = np->next) {
      node* _np = np->next;
      delete _np;
    }
    delete head;
    delete tail;
  }
  void push_front(const int val) {
    node *np = new node(val); 
    np->next = head->next; 
    head->next = np;
  }
  void display() {
    for (node* np = head->next; np != tail; np=np->next) 
      cout << np->data << endl; 
  }
private:
  node* head;
  node* tail;
};
#endif
