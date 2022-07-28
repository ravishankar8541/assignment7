//Write a program to check whether a given number is an Armstrong number
//or not

#include"stdio.h"
int main()
{
    int n,temp,r,bag=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        r=temp%10;
        bag=(r*r*r)+bag;
        temp=temp/10;
    }
    if(bag==n){
        printf("Armstrong number ");
    }else{
        printf("Not Armstrong number ");
    }
    return 0;
}