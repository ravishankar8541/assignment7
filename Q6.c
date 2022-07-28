//Write a program to print all Prime numbers under 100
#include"stdio.h"
int main()
{
    int i,j;
    int count;
    
        for(i=1;i<100;i++){
            count=0;
            for(j=1;j<100;j++){
                if(i%j==0){
                    count++;
                }
            }
            if(count==2){
                printf("%d ",i);
            }

        }
        
    return 0;
}