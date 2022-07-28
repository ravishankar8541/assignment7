// Write a program to calculate HCF of two numbers
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
printf("HCF is %d",HCF);
return 0;
}