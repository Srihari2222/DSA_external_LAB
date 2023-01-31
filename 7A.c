/*
Implement Linear search 

input size
input elements
input key 
display message

Example1
input=
5    //size
10   // element1
25   // element2
14  // element3
32  // element4
93  // element5
14  // key
output=
Key is found

Example2
input=
5
10
5
14
32
23
54
output=
Key is not found


*/
#include<stdio.h>
int main()
{
    int n,k,arr[100],i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key Element to be searched: ");
    scanf("%d",&k);
    int c = 0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("Key is found");
            c=1;
            break;
        }
    }
    if(!c)
    {
        printf("Key is not found");
    }
    return 0;
}








