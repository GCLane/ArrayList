#include "ArrayList.h"

using namespace ArrayList;


arrayList::arrayList(){
  a[0] = 0;
  total = 1;
  current = 0;
}

void arrayList::doubleList(){
  int tempTotal = total * 2;
  int *temp = new int[tempTotal];

  for(int i = 0; i < tempTotal; i++)
  {
    if(i < total)
      temp[i] = a[i];
    else
      temp[i] = 0;
  }
  delete a;

  total = tempTotal;
  a = temp;
}

void arrayList::push(int num){
  if(current >= total)
    doubleList();
  a[current] = num;
  current++;
}

void arrayList::halveList(){
  int tempTotal = total / 2;
  int *temp = new int[tempTotal];

  for(int i = 0; i < tempTotal; i++)
  {
    if(a[i] != 0)
      temp[i] = a[i];
    else
      temp[i] = 0;
  }
  delete a;

  total = tempTotal;
  a = temp;
}

void arrayList::erase(int num){
  int counter = 0;

  while(a[counter] != num)
    counter++;

  a[counter] = 0;
  counter++;
  current--;

  while(a[counter] != 0){
    a[counter - 1] = a[counter];
    a[counter] = 0;
    counter++;
  }

  if(current <= (total / 2))
    halveList();

}

void arrayList::toString(){
  cout<<"[";
  for(int i = 0; i < current; i++)
    cout<<" "<<a[i];
  cout<<"]"<<endl;
}
