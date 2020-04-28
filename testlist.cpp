#include <iostream>
#include "lista3.h"

using namespace std;

int main()
{
  lista mylist;

  for (int i = 0; i < 4; i++)
    mylist.push_back(i);
  mylist.display();

  // test copy constructor

  lista anotherlist(mylist);
  anotherlist.display();

  // test assignment operator overload

  lista yetanotherlist = mylist;
  yetanotherlist.display();

}
