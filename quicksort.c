#include<stdio.h>
void quicksort(int array[25],int low,int high){
   int i, j, pivot, temp;
   if(low<high){
      pivot=low;
      i=low;
      j=high;
      while(i<j){
         while(array[i]<=array[pivot]&&i<high)
         i++;
         while(array[j]>array[pivot])
         j--;
         if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }
      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      quicksort(array,low,j-1);
      quicksort(array,j+1,high);
   }
}
int main(){
   int i, n, array[25];
   printf("Enter no. of elements in the array: ");
   scanf("%d",&n);
   printf("Enter %d array elements: ", n);
   for(i=0;i<n;i++)
   scanf("%d",&array[i]);
   quicksort(array,0,n-1);
   printf("Sorted array in ascending Order using quick sort Algorithm is as follows: ");
   for(i=0;i<n;i++)
   printf(" %d",array[i]);
   return 0;
}
