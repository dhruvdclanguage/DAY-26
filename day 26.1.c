#include<stdio.h>

 int main(){
 	
  int a,square=0;
  int *p,*q;
  
       printf("Enter the square : ");  
       scanf("%d",&a);

  p = &a;
  q = &square;

    square = (*p)*(*p);
    
      printf("\n square value :%d",*q);
      
      return 0;
}
