//Write a program to print all Armstrong numbers under 1000

#include"stdio.h"
int main()
{
    int n,temp,r,bag;
    
    for(n=1;n<=1000;n++)
    {
    temp=n;
    bag=0;
    while(temp!=0){
        r=temp%10;
        bag=(r*r*r)+bag;
        temp=temp/10;
    }
    if(bag==n){
        printf("%d ",bag);
    }
    }
    return 0;
}
