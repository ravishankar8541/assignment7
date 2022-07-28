//Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include"stdio.h"
int main()
{
    int a=0,b=1,n,i,c;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=0;1;i++){
        a=b;
        b=c;
        c=a+b;
        if(c==n){
            printf("Yes found");
            break;
        }
        if(c>n){
            printf("Not found");
            break;
        }
    }
    return 0;
}


