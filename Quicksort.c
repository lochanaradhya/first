#include<stdio.h>
#include<time.h>


void exchange(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;

}

void quicksort(int a[],int low,int high)
{
	int i,j,key;

	if(low>=high)
	 return;

	 key=low;
	 i=low+1;
	 j=high;

	 while(i<=j)
	 {
		 while(a[i]<=a[key])

			 i=i+1;

		  while(a[j]>a[key])


			   j=j-1;


		  if(i<j)
		  exchange(&a[i],&a[j]);

	 }

	 exchange(&a[j],&a[key]);
	 quicksort(a,low,j-1);
	 quicksort(a,j+1,high);


}

int main()
{
	int n,a[100],k;
	clock_t st,et;
	double time_taken;

	printf("Enter number of elements:\n");
	scanf("%d",&n);

	printf("Enter elements of an array :\n");
	  for(k=1;k<=n;k++)
	    {
	      scanf("%d",&a[k]);

	    }
	    st = clock();
	    quicksort(a,1,n);
	    et=clock();

	    printf("Sorted numbers\n");
	      for(k=1;k<=n;k++)

	      printf("%d\t",a[k]);


          time_taken=((double)et-st)/CLOCKS_PER_SEC;
		  printf("time taken for sorting %d elements is %f sec\n",n,time_taken);

}

