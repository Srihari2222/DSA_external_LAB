#include<stdio.h>
void Bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
void print(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    printf("%d\t",arr[i]);
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Array before sorting: ");
    print(arr,n);
    printf("\nArray after sorting: ");
    Bubble_sort(arr,n);
    print(arr,n);
    return 0;
}