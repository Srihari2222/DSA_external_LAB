#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int n;
    printf("Enter the String: ");
    scanf("%s",str);
    n=strlen(str);
    char res[100];
    for(int i=0;i<n;i++)
    {
        res[i]=str[n-i-1];
    }
    res[n]='\0';
    printf("\nReversed string : %s",res);
    return 0;
}