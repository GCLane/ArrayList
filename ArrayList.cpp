#include "ArrayList.h"

using namespace ArrayList;

int main(){
  arrayList list;

  list.push(1);
  list.toString();
  list.push(2);
  list.push(3);
  list.push(4);
  list.toString();

  list.erase(2);
  list.erase(4);
  list.toString();

  list.push(5);
  list.toString();

  return 0;
}
