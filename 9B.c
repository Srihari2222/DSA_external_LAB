#include<stdio.h>
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
void merge(int arr[],int l,int mid,int r)
{
    int temp[r-l+1],i=l,j=mid+1,k=l;
    while(i<=mid && j<=r)
    {
        if(arr[i]<=arr[j]) temp[k++]=arr[i++];
        else temp[k++]=arr[j++];
    }
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];
    for(int idx=l;idx<k;idx++)
    arr[idx]=temp[idx];


}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Array before sorting : ");
    print(arr,n);
    printf("\nArray after sorting : ");
    mergesort(arr,0,n-1);
    print(arr,n);

    return 0;
}