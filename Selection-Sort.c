//C program to see selection Sort
#include<stdio.h>
void swap(int arr[],int x,int y)
{
    int temp;
    temp = arr[x];
    arr[x] = arr [y];
    arr[y] = temp;
}
int indexOfMinimum(int arr[], int z, int n)
{
    int minValue = arr[z];
    int minIndex = z;
    for(int i = minIndex + 1; i < n;i++) {
        if (arr[i] < minValue)
        {
            minIndex = i;
            minValue = arr[i];
        }
    }
    return minIndex;
}
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index = indexOfMinimum(arr,i,n);
        swap(arr,i,index);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={46,52,21,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printf("Sorted array: \n");
    printArray(arr,n);
    return 0;
}

//Output:
//Sorted array: 
//11 21 22 46 52
