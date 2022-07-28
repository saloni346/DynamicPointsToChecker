#include <set>
#include <utility>
#include "include/CheckPointee.h"
#define GET_VARIABLE_NAME(Variable) (#Variable)
set<pairs> s1;
    #include <stdio.h>  
    float add(float,int);  
    float sub(float,int);  
    float mul(float,int);  
    float divi(float,int);  
    
    void func(float x,int y)  
    {  
        float (*fp[4]) (float,int); 
cout<<"At line no. 9  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[0]), s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();
cout<<"At line no. 9  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[1]), s1 , GET_VARIABLE_NAME(fp[1]));
s1.clear();
cout<<"At line no. 9  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[2]), s1 , GET_VARIABLE_NAME(fp[2]));
s1.clear();
cout<<"At line no. 9  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[3]), s1 , GET_VARIABLE_NAME(fp[3]));
s1.clear();

        fp[0]=add;              // assigning addresses to the elements of an array of a function   pointer.  
        fp[1]=sub;  
        fp[2]=mul;  
        fp[3]=divi;  
        
cout<<"At line no. 15  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[0]), s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();
cout<<"At line no. 15  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[1]), s1 , GET_VARIABLE_NAME(fp[1]));
s1.clear();
cout<<"At line no. 15  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[2]), s1 , GET_VARIABLE_NAME(fp[2]));
s1.clear();
cout<<"At line no. 15  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[3]), s1 , GET_VARIABLE_NAME(fp[3]));
s1.clear();
      float r=(*fp[0]) (x,y);        // Calling add() function.  
         
cout<<"At line no. 17  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[0]), s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();
cout<<"At line no. 17  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[1]), s1 , GET_VARIABLE_NAME(fp[1]));
s1.clear();
cout<<"At line no. 17  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[2]), s1 , GET_VARIABLE_NAME(fp[2]));
s1.clear();
cout<<"At line no. 17  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[3]), s1 , GET_VARIABLE_NAME(fp[3]));
s1.clear();
         r=(*fp[1]) (x,y);             // Calling sub() function.  
        
cout<<"At line no. 19  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[0]), s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();
cout<<"At line no. 19  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[1]), s1 , GET_VARIABLE_NAME(fp[1]));
s1.clear();
cout<<"At line no. 19  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[2]), s1 , GET_VARIABLE_NAME(fp[2]));
s1.clear();
cout<<"At line no. 19  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[3]), s1 , GET_VARIABLE_NAME(fp[3]));
s1.clear();
          r=(*fp[2]) (x,y);            // Calliung sub() function.  
         
cout<<"At line no. 21  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[0]), s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();
cout<<"At line no. 21  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[1]), s1 , GET_VARIABLE_NAME(fp[1]));
s1.clear();
cout<<"At line no. 21  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[2]), s1 , GET_VARIABLE_NAME(fp[2]));
s1.clear();
cout<<"At line no. 21  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[3]), s1 , GET_VARIABLE_NAME(fp[3]));
s1.clear();
         r=(*fp[3]) (x,y);           // Calling div() function.  
        
cout<<"At line no. 23  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[0]), s1 , GET_VARIABLE_NAME(fp[0]));
s1.clear();
cout<<"At line no. 23  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[1]), s1 , GET_VARIABLE_NAME(fp[1]));
s1.clear();
cout<<"At line no. 23  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[2]), s1 , GET_VARIABLE_NAME(fp[2]));
s1.clear();
cout<<"At line no. 23  ";
s1.insert(make_pair((GET_VARIABLE_NAME(add)), reinterpret_cast<void*>(&add)));
s1.insert(make_pair((GET_VARIABLE_NAME(sub)), reinterpret_cast<void*>(&sub)));
s1.insert(make_pair((GET_VARIABLE_NAME(mul)), reinterpret_cast<void*>(&mul)));
s1.insert(make_pair((GET_VARIABLE_NAME(divi)), reinterpret_cast<void*>(&divi)));
CheckPoint(reinterpret_cast<void*>(fp[3]), s1 , GET_VARIABLE_NAME(fp[3]));
s1.clear();
          
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
    float divi(float x,int y)  
    {  
        float a=x/y;  
        return a;  
    }  