#include<stdio.h>  

//CALL BY VALUE

void change(int num)
{    
    printf("Before adding value inside function num=%d \n",num);    
    num=num+100;    
    printf("After adding value inside function num=%d \n", num);    
}  

// CALL BY REFERENCE
  
void change(int *num) 
{    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}     
int main() 
{    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(x);//passing value in function    
    printf("After function call x=%d \n", x);    
    return 0;  
 
      
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x);    
    return 0; 
}
    
