#include <cstdint>
#include <iostream>
#include <set>

using namespace std;

bool CheckPoint(int *pointer, set<int *> pointee) {
  set<int *>::iterator itr;
  cout << "Address of the pointees in the set " << endl;
  for (itr = pointee.begin(); itr != pointee.end(); itr++) {
    cout << *itr << " ";
  }
  cout << endl;
  cout << "Address of the pointer =" << pointer << endl;
  for (itr = pointee.begin(); itr != pointee.end(); itr++) {
    if (pointer == *itr)
      break;
  }
  if (itr == pointee.end())
    return false;
  else
    return true;
}
