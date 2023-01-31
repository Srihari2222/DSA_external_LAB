#include<stdio.h>
int Binary(int arr[],int n,int k)
{
    int first=0,last=n-1,mid;
    while(first<=last)
    {
        mid = (first+last)/2;
        if(arr[mid]==k) return 1;
        else if(arr[mid]<k) first = mid+1;
        else last = mid-1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n],key;
    printf("Enter the elements of the array in sorted order: ");
    for(int i = 0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the key element to be searched: ");
    scanf("%d",&key);
    if(Binary(arr,n,key))
    printf("Key is found");
    else
    printf("Key is not found");
    return 0;
}