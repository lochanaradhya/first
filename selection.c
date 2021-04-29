/// SELECTION SORT PROGRAM..

#include<stdio.h>
#include <stdlib.h>


int main()
{
    int n,i,j,pos,temp,small,arr[500];

    printf("ENTER THE NUMBER OF ELEMENTS OF THE ARRAY :  \n");
    scanf("%d", &n);
    printf("ELEMENTS OF THE ARRAY ENTERED ARE : \n");
    for (i= 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        small=arr[i];
        pos=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<small)
            {
                small=arr[j];
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    printf("\nSORTED ARRAY IS : \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
