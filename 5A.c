#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char arr[15];
int top=-1;
void push(char value)
{
    arr[++top]=value;
}
char pop()
{
    if(top==-1)
    return 1;
    return arr[top--];
}
int priority(char n)
{
    if(n=='(')
    return 0;
    else if(n=='+' || n=='-')
    return 1;
    else if(n=='*' || n=='/')
    return 2;
    return 0;
}
void main()
{
    char exp[100],x;
    printf("Enter the string: ");
    scanf("%s",exp);
    int i=0;
    while(exp[i]!='\0')
    {
        if(isalnum(exp[i]))
        printf("%c",exp[i]);
        else if(exp[i]=='(')
        push(exp[i]);
        else if(exp[i]==')')
        {
            while((x=pop())!='(')
            printf("%c",x);
        }
        else{
            while(priority(arr[top])>=priority(exp[i])){
                printf("%c",pop());
            }
            push(exp[i]);
        }
        i++;
    }
    while(top!=-1)
    printf("%c",pop());
}