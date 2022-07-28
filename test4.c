    #include <stdio.h>  
    float add(float,int);  
    float sub(float,int);  
    float mul(float,int);  
    float divi(float,int);  
    
    void func(float x,int y)  
    {  
        float (*fp[4]) (float,int); 

        fp[0]=add;              // assigning addresses to the elements of an array of a function   pointer.  
        fp[1]=sub;  
        fp[2]=mul;  
        fp[3]=divi;  
        
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
    float divi(float x,int y)  
    {  
        float a=x/y;  
        return a;  
    }  