#include <stdio.h>
#include<time.h>

void selectionSort(int arr[], int size);
void swap(int *a, int *b);

void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0 ;  i < size;i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
     int n,arr[50],i;
    clock_t st,et;
     printf("Enter the size of the array\n");
     scanf("%d",&n);

     printf("Enter the array elements\n");

            for(i=0;i<n;i++)
            {

                scanf("%d",&arr[i]);

            }

    st=clock();
    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);


    et=clock();




    printf("\n Time taken is s%e,CLOCKS_PER_SEC");
}
