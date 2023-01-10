#include<stdio.h>

//factorial of number using Itrative method 

void main(){

    printf("\nHello everyone\n");
    
   

     int i;
     int fact=1;
     int num;
      
      //Blow code is factorial of number using iterative method
     printf("\nEnter Number: ");
     scanf("%d",&num);

     printf("\nYou entered %d",num);
       

     for(i=1; i<=num; i++){
        fact = fact *i;
     }
    
    printf("\t Factorial of number %d is = %d",num,fact);





}
