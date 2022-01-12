#ifndef _ARRAYLIST_H
#define _ARRAYLIST_H

#include <iostream>

using namespace std;

namespace ArrayList{
  class arrayList{



    public:
      arrayList();
      void push(int num);
      void erase(int num);
      void toString();

    private:
      int *a = new int[1];
      int current;
      int total;

      void doubleList();
      void halveList();

  };
}
#endif
