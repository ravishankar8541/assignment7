//Write a program to find the Nth term of the Fibonnaci series.
#include"stdio.h"
int main()
{
    int a=1,b=1,c,i,n;
    printf("Enter a number :");
    scanf("%d",&n);
       if(n==1)
         {
        printf("%d",a);

    }
    else if(n==2)
    {
        printf("%d",b);
            }
            else
            {

    for(i=1;i<n-1;i++){
        
     c=a+b;
     a=b;
     b=c;
    }
    printf("%d",c);
            }

    return 0;
}
