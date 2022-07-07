#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
set<pairs> s1;
    #include <stdio.h>  
    float add(float,int);  
    float sub(float,int);  
    float mul(float,int);  
    float div(float,int);  
    
    void func(float x,int y)  
    {  
        float (*fp[4]) (float,int); 
cout<<"At line no. 9  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), &add));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), &sub));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), &mul));
s1.insert(make_pair((GET_VARIABLE_NAME(div)), &div));
CheckPoint(fp[0], s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();

        fp[0]=add;              // assigning addresses to the elements of an array of a function   pointer.  
        fp[1]=sub;  
        fp[2]=mul;  
        fp[3]=div;  
        
      float r=(*fp[0]) (x,y);        // Calling add() function.  
         
         r=(*fp[1]) (x,y);             // Calling sub() function.  
        
          r=(*fp[2]) (x,y);            // Calliung sub() function.  
         
         r=(*fp[3]) (x,y);           // Calling div() function.  
        
          
    }  
      
    float add(float x,int y)  
    {  
        float a=x+y;  
        return a;  
    }  
    float sub(float x,int y)  
    {  
        float a=x-y;  
        return a;  
    }  
    float mul(float x,int y)  
    {  
        float a=x*y;  
        return a;  
    }  
    float div(float x,int y)  
    {  
        float a=x/y;  
        return a;  
    }  