/***************************************************
 * A skeleton for the doubly linked circular list homework
 * Pay special attention to the way a list is initialized on line 16
 * due electronically (Blackboard upload) by Friday April 3
 * *************************************************/
 
struct node {
  node(){};
  node(const int val){};
  int data;
  node* next;
  node* prev;
};

class lista {
public:
  lista(){head=new node; head->next = head; head->prev = head;};
  void push_front(const int val){};
  void push_end(const int val){}
  void display(){};
private:
  node* head;
};


int main()
{
  lista mylist;

  for (int i = 0; i < 10; i++)
    mylist.push_front(i);
  mylist.display();

}
