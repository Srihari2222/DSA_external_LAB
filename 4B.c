#include<stdio.h>
#include<stdlib.h>
#define size 7
int arr[size];
void init()
{
    for(int i=0;i<size;i++)
    arr[i]=-1;
}
void insert(int value)
{
    int key=value%size;
    if(arr[key]==-1)
    arr[key]=value;
    else{
        printf("Collision occured!!");
    }
}
void delete(int value)
{
    int key=value%size;
    if(arr[key]==value)
    arr[key]=-1;
    else{
        printf("Element not found!!!");
    }
}
void search(int value)
{
    int key=value%size;
    if(arr[key]==value)
    printf("Element found");
    else{
        printf("Element not found");
    }
}
void print()
{
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}
int main()
{
    init();
    insert(10);insert(4);
    print();
    delete(25);
    search(10);
    print();
    return 0;
}