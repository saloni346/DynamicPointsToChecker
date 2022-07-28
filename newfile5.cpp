#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
set<pairs> s1;
#include <stdio.h>
#include <string.h>

struct student_college_detail
{
    int college_id;
    char college_name[50];
};

struct student_detail 
{
    int id;
    char name[20];
    float percentage;
    // structure within structure
    struct student_college_detail clg_data; 
}stu_data, *stu_data_ptr;

void func() 
{
  
cout<<"At line no. 21  ";
s1.insert(make_pair((GET_VARIABLE_NAME(stu_data)), reinterpret_cast<void*>(&stu_data)));
CheckPoint(reinterpret_cast<void*>(stu_data_ptr), s1 , GET_VARIABLE_NAME(stu_data_ptr));
s1.clear();
  struct student_detail stu_data = {1, "Raju", 90.5, 71145, "Anna University"};
    stu_data_ptr = &stu_data;

cout<<"At line no. 24  ";
s1.insert(make_pair((GET_VARIABLE_NAME(stu_data)), reinterpret_cast<void*>(&stu_data)));
CheckPoint(reinterpret_cast<void*>(stu_data_ptr), s1 , GET_VARIABLE_NAME(stu_data_ptr));
s1.clear();

  
}