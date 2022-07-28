//Write a program to print all Prime numbers between two given numbers
#include"stdio.h"
int main()
{
    int a,b,i,j;
    int flag;;
    printf("Enter begining number :");
    scanf("%d",&a);
    printf("Enter last number :");
    scanf("%d",&b);
    printf("\nPrime numbers between %d and %d are \n",a,b );
    for(i=a;i<=b;i++){
        if(i==0 || i==1)
        continue;
        flag=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("\n%d ",i);
        
        
    }
    
        return 0; 
    

}