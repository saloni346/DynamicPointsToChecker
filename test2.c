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
        
        ptr = &sub1;/* ptr variable pointing to the address of the structure variable sub */  
          
        strcpy (sub1.sub_name, " Computer Science");  
        sub1.sub_id = 1201;  
        strcpy (sub1.sub_duration, "6 Months");  
        strcpy (sub1.sub_type, " Multiple Choice Question");  

        ptr=&sub2;

        strcpy (sub2.sub_name, " Computer engineering");  
        sub2.sub_id = 1201;  
        strcpy (sub2.sub_duration, "6 Months");  
        strcpy (sub2.sub_type, " Multiple Choice Question");  
      
    

    }  