#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=0;
int rear=-1;
int queue[max];
void enqueue();
void dequeue();
void display();
int main()
{
    int choice,value;
    while(1)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2: dequeue();
            break;
            case 3: display();exit(0);break;
            default:printf("Wrong choice");exit(0);break;
        }
    }
    return 0;
}
void enqueue()
{
    if(rear==max-1) 
    {
        printf("Queue Overflow");
        exit(0);
    }
    else{
        int value;
        scanf("%d",&value);
        queue[++rear]=value;
    }
}
void dequeue()
{
    if(rear==-1)
    {
        printf("Queue Underflow");
        exit(0);
    }
    else{
        // printf("Element deleted from queue is : %d",queue[front]);
        front++;
    }
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}8