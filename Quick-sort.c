//C program to perform QuickSort
#include<stdio.h>
void quickSort(int [10],int,int);

void main(){
  int list[20],size,i;

  printf("Enter size of the list:");
  scanf("%d",&size);

  printf("Enter %d integer values:\n",size);
  for(i = 0; i < size; i++)
    scanf("%d",&list[i]);

  quickSort(list,0,size-1);

  printf("List after sorting is:");
  for(i = 0; i < size; i++)
    printf(" %d",list[i]);
}

void quickSort(int list[10],int first,int last){
    int pivot,i,j,temp;

     if(first < last){
         pivot = first;
         i = first;
         j = last;

         while(i < j){
             while(list[i] <= list[pivot] && i < last)
                 i++;
             while(list[j] > list[pivot])
                 j--;
             if(i <j){
                  temp = list[i];
                  list[i] = list[j];
                  list[j] = temp;
             }
         }

         temp = list[pivot];
         list[pivot] = list[j];
         list[j] = temp;
         quickSort(list,first,j-1);
         quickSort(list,j+1,last);
    }
}
//Quick Sort working Explaination
//Quick Sort >> Fastest
// unsorted list = 5 6 7 8 2 1 3 4
// Pivot (0) = 5; left (1) = 6; right (7) =4;
// 7 indicates size-1
// Compare left>pivot  right > pivot

// Output:
//Enter size of the list:3
//Enter 3 interger vlaues: 
//67 65 90
//List after sorting is: 65 67 90
