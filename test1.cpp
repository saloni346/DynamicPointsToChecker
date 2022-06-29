#include <cstdint>
#include <iostream>
#include <set>
#include <utility>

#include "include/CheckPointee.h"

#define GET_VARIABLE_NAME(Variable) (#Variable)
typedef pair<const char *, int *> pairs;
set<pairs> s1;

using namespace std;



int main() {
  int x, a, b, *p,*q;


  x=1;a=2;b=3;

  //set<pairs> s1;

  s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
  s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
  s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));

  cout << "checkpoint 1 \n" ; CheckPoint(p, s1,GET_VARIABLE_NAME(p));
  
  if (x) {
    p = &a;
    cout << "checkpoint 2\n" ; CheckPoint(p, s1,GET_VARIABLE_NAME(p));
    
  } else {
    p = &b;
    cout << "checkpoint 3 \n" ; CheckPoint(p, s1, GET_VARIABLE_NAME(p));
    
  }
  cout << "checkpoint 4 \n" ; CheckPoint(p, s1,GET_VARIABLE_NAME(p));
  
  return 0;
}





