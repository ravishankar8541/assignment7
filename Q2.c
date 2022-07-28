// Write a program to print first N terms of Fibonacci series
#include"stdio.h"
int main()
{
    int previous=1,current=1,next,i,num;
    printf("Enter the value of num :");
    scanf("%d",&num);
    printf("First %d fibonacci number are :",num);
    if(num==1){
    printf("%d ",previous);
    }
    else if(num==2)
    {
    printf("%d ",current);
    }
    else {
         printf("%d ",previous);
        printf("%d ",current);
    for(i=1;i<num-1;i++){
        next=previous+current;
        printf("%d ",next);
        previous=current;
        current=next;
        
    }
    }
    return 0;

}