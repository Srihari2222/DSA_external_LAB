#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top=NULL;
void push(int value);
void pop();
void display();
int main()
{
    int choice,value;
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the element: ");
            scanf("%d",&value);
            push(value);
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default : printf("Enter the correct choice!!!");break;
        }
    }

    return 0;
}
void push(int value)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node*));
    newNode->data=value;
    if(top==NULL)
    newNode->next=NULL;
    else{
        newNode->next=top;
    }
    top=newNode;
}
void pop()
{
    struct node *temp=top;
    printf("The element which is deleted is : %d",top->data);
    top=top->next;
    free(temp);
}
void display()
{
    if(top==NULL)
    printf("Stack is Empty!!!");
    else{
        struct node *temp=top;
        while(temp->next!=NULL)
        {
            printf("%d--->",temp->data);
            temp=temp->next;
        }
        printf("%d--->NULL",temp->data);
    }
}