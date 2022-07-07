#include <stdio.h>
 
void func(int a, int b, int c, char ch)
{
    int *p1,**p2;
     
    p1=&a;          //assign address of a
    
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
    
}
