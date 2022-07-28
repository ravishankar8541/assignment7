/*Write a program to check whether two given numbers are co-prime
numbers or not*/
#include"stdio.h"
int main()
{
     int a,b,HCF=1;
    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);
    int min=a<b?a:b;
for(int i=1;i<=min;i++){
    if((a%i==0) && (b%i==0)){
        HCF=i;
    }
}
if(HCF==1)
printf("This number are co-prime number ");
   return 0;
}