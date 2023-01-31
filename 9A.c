#include<stdio.h>
int pivot_idx(int arr[],int l,int r)
{

    int pivot = r;
    int p = l;
    for(int i=l;i<r;i++)
    {
        if(arr[i]<arr[pivot]){
            int swap = arr[i];
            arr[i]=arr[p];
            arr[p]=swap;
            p++;
        }
    }
    int temp=arr[p];
    arr[p]=arr[pivot];
    arr[pivot]=temp;
    return p;
}
void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pidx = pivot_idx(arr,l,r);
        quicksort(arr,pidx+1,r);
        quicksort(arr,l,pidx-1);
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements : ");
    for(int i = 0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Array before sorting : ");
    print(arr,size);
    printf("\nArray after sorting : ");
    quicksort(arr,0,size-1);
    print(arr,size);
    return 0;
}