#include<stdio.h>
void insertion_sort(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        j = i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }

    }
}
void print_Array(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array: ");
    for(int i = 0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Array Before Sorting is : ");
    print_Array(arr,size);
    insertion_sort(arr,size);
    printf("\nArray after Sorting is : ");
    print_Array(arr,size);

    return 0;
}