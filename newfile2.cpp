#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
set<pairs> s1;
    #include <stdio.h>

      
    
    typedef struct Subject  
    {  

        char sub_name[30];  
        int sub_id;  
        char sub_duration[50];  
        char sub_type[50];  
    }subject;  
      
    void func()  
    {  
        Subject sub1,*ptr,sub2; // declare the Subject variable  
        
cout<<"At line no. 17  ";
s1.insert(make_pair((GET_VARIABLE_NAME(sub1)), reinterpret_cast<void*>(&sub1)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub2)), reinterpret_cast<void*>(&sub2)));
CheckPoint(reinterpret_cast<void*>(ptr), s1 , GET_VARIABLE_NAME(ptr));
s1.clear();
        ptr = &sub1;/* ptr variable pointing to the address of the structure variable sub */  
          
cout<<"At line no. 19  ";
s1.insert(make_pair((GET_VARIABLE_NAME(sub1)), reinterpret_cast<void*>(&sub1)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub2)), reinterpret_cast<void*>(&sub2)));
CheckPoint(reinterpret_cast<void*>(ptr), s1 , GET_VARIABLE_NAME(ptr));
s1.clear();
        strcpy (sub1.sub_name, " Computer Science");  
        sub1.sub_id = 1201;  
        strcpy (sub1.sub_duration, "6 Months");  
        strcpy (sub1.sub_type, " Multiple Choice Question");  

cout<<"At line no. 24  ";
s1.insert(make_pair((GET_VARIABLE_NAME(sub1)), reinterpret_cast<void*>(&sub1)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub2)), reinterpret_cast<void*>(&sub2)));
CheckPoint(reinterpret_cast<void*>(ptr), s1 , GET_VARIABLE_NAME(ptr));
s1.clear();
        ptr=&sub2;

cout<<"At line no. 26  ";
s1.insert(make_pair((GET_VARIABLE_NAME(sub1)), reinterpret_cast<void*>(&sub1)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub2)), reinterpret_cast<void*>(&sub2)));
CheckPoint(reinterpret_cast<void*>(ptr), s1 , GET_VARIABLE_NAME(ptr));
s1.clear();
        strcpy (sub2.sub_name, " Computer engineering");  
        sub2.sub_id = 1201;  
        strcpy (sub2.sub_duration, "6 Months");  
        strcpy (sub2.sub_type, " Multiple Choice Question");  
      
cout<<"At line no. 31  ";
s1.insert(make_pair((GET_VARIABLE_NAME(sub1)), reinterpret_cast<void*>(&sub1)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub2)), reinterpret_cast<void*>(&sub2)));
CheckPoint(reinterpret_cast<void*>(ptr), s1 , GET_VARIABLE_NAME(ptr));
s1.clear();
    

    }  