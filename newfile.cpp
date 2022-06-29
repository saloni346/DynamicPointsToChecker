#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
typedef pair<const char *, int *> pairs;
set<pairs> s1;
#include <cstdint>
#include <iostream>

using namespace std;

int main() {
  int x, a, b, a1, b1, x1, *p,*q;

cout<<"At line no. 8  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 8  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
 x=1;a=2;b=3;
  
cout<<"At line no. 10  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 10  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
  if (x) {
    p = &a1;
cout<<"At line no. 12  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 12  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
} else {
    p = &b;
    
cout<<"At line no. 15  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 15  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
  } 
cout<<"At line no. 16  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 16  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
  return 0;
}



