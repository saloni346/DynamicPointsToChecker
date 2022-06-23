#include <cstdint>
#include <iostream>
#include <set>
#include <utility>

#include "include/CheckPointee.h"

#define GET_VARIABLE_NAME(Variable) (#Variable)

using namespace std;
typedef pair<const char *, int *> pairs;


int main() {
  int x, a, b, *p;
  x=1;a=2;b=3;

  set<pairs> s1;

  s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
  s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
  s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));

  cout << "checkpoint 1 \n" ; CheckPoint(p, s1);
  
  if (x) {
    p = &a;
    cout << "checkpoint 2\n" ; CheckPoint(p, s1);
    
  } else {
    p = &b;
    cout << "checkpoint 3 \n" ; CheckPoint(p, s1);
    
  }
  cout << "checkpoint 4 \n" ; CheckPoint(p, s1);
  
  return 0;
}





