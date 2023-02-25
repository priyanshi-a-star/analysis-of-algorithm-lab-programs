#include<stdio.h>
#include<conio.h>
void binarysearch(int arr[],int low,int high,int mid,int key)
{
    while(low<=high)
    {
        if(arr[mid]<key)
        low = mid+1;
        else if(arr[mid]>key)
        high = mid-1;
        else
        {
            printf("elements %d found at position %d",key,mid+1);
            break;
        }
        mid = (low + high) / 2;
    }
}
int main()
{
    int arr[100],high,mid,low,key,n,i;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter elements to search");
    scanf("%d",&key);
    low =0;
    high = n-1;
    mid = (low + high) / 2;
    binarysearch(arr,low,high,mid,key);
    getch();
    return 0;
}