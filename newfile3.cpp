#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
set<pairs> s1;
#include <stdio.h>
 
void func(int a, int b, int c, char ch)
{
    int *p1,**p2;
     
cout<<"At line no. 6  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(c)), &c));
CheckPoint(p1, s1 , GET_VARIABLE_NAME(p1));
s1.clear();
cout<<"At line no. 6  ";
s1.insert(make_pair((GET_VARIABLE_NAME(p1)), &p1));
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(c)), &c));
CheckPoint(p2, s1 , GET_VARIABLE_NAME(p2));
s1.clear();
    p1=&a;          //assign address of a
    
cout<<"At line no. 8  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(c)), &c));
CheckPoint(p1, s1 , GET_VARIABLE_NAME(p1));
s1.clear();
cout<<"At line no. 8  ";
s1.insert(make_pair((GET_VARIABLE_NAME(p1)), &p1));
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(c)), &c));
CheckPoint(p2, s1 , GET_VARIABLE_NAME(p2));
s1.clear();
    switch(ch){
        case 'A':
            p1=&a;
            break;

        case 'B':
            p1=&b;p2=&p1;
            break;

        case 'C':
            p1=&c;
            break;

        default :
            p1=&a;
            break;
        }
    
cout<<"At line no. 26  ";
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(c)), &c));
CheckPoint(p1, s1 , GET_VARIABLE_NAME(p1));
s1.clear();
cout<<"At line no. 26  ";
s1.insert(make_pair((GET_VARIABLE_NAME(p1)), &p1));
s1.insert(make_pair((GET_VARIABLE_NAME(a)), &a));
s1.insert(make_pair((GET_VARIABLE_NAME(b)), &b));
s1.insert(make_pair((GET_VARIABLE_NAME(c)), &c));
CheckPoint(p2, s1 , GET_VARIABLE_NAME(p2));
s1.clear();
}
