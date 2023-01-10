#include<stdio.h>

//factorial of number using recursive method 
int factorial(int num){
   if(num==1){
    return 1;
   }else{
    return num * factorial(num-1);
   }
}
void main(){

    printf("\nHello everyone\n");
    //either you can take input from user also
  /*
      int num;
      printf("enter number");
      scanf("&d",&num);
      //and put num as parameter to function 
      
     */
    int factorial_value = factorial(5);
    printf("%d",factorial_value);

}
