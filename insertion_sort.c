#include<stdio.h>
#include<time.h>
#include<stdlib.h>
 int insertion_sort(int a[],int n)
{
	int y,i,j;
for(i=1;i<n;i++)
{
y=a[i];
j=i-1;
while(j>=0&&a[j]>y)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=y;
}
}

int main()
{
int i,n,a[100];
clock_t st,et;
while(1)
{
printf("enter the number of the elements\n");
scanf("%d",&n);
printf("Enter the elements to be sorted\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
st=clock();
insertion_sort(a,n);
et=clock();

printf("printing the sorted arary\n");
{
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}

double time_taken=((double)et-st)/CLOCKS_PER_SEC;
printf("time taken for sorting %d elements is %f sec\n",n,time_taken);
printf("\n");
}
}
