#include<stdio.h>
int main()
{
    printf("Numbers from 1 to 40 are : ");
    for(int i=1;i<=100;i++)
    {
        printf("%d ",i);
        if(i==40){
            printf("\nNumbers from 60 to 100 are : ");
            i=59;
        }
    }
    return 0;
}