#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
set<pairs> s1;
#include<stdio.h>


void func(int x,int a,int b,int x1,int a1,int b1){
	int *p ,*q;
cout<<"At line no. 5  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 5  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
  
  if (x) {
cout<<"At line no. 7  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 7  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
    p = &a1;
    
  } else {
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
    p = &b;
      
  }
cout<<"At line no. 13  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a1)), &a1));
s1.insert(make_pair((GET_VARIABLE_NAME(b1)), &b1));
s1.insert(make_pair((GET_VARIABLE_NAME(x1)), &x1));
CheckPoint(p, s1 , GET_VARIABLE_NAME(p));
s1.clear();
cout<<"At line no. 13  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(x)), &x));
CheckPoint(q, s1 , GET_VARIABLE_NAME(q));
s1.clear();
  
}

