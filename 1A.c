#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1,stack[MAX];
void pop();
void push();
void display();
void main()
{
    printf("Choose an option: 1.push 2.pop 3.display 4.exit");
    while(1)
    {
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
                exit(0);
                break;
            default:printf("Enter the correct choice");
            break;
        }
    }
}
void push()
{
    if(top==MAX-1)
    {
        printf("Stack is Full");
    }
    else
    {
        int value;
        scanf("%d",&value);
        stack[++top]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else{
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else{
        for(int i=top;i>=0;i--)
        printf("%d ",stack[i]);
    }
}