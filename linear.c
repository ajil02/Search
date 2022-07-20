/*Program to perform linear search*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define n 100

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}


void main()
{
	struct timeval t0;
   	struct timeval t1;
   	float elapsed;
   	int n;
   	printf("Enter the number of random numbers to generate:");
	scanf("%d",&n);
   	
	int x,arr[n],i,j=0;
	
	//gettimeofday(&t0, NULL);
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]=rand()%100);
	}
	//gettimeofday(&t1, NULL);
	//elapsed = timedifference_msec(t0, t1);
  	//printf("\nCode executed in %f milliseconds.\n", elapsed);
	printf("\n Enter value to be searched:");
	scanf("%d",&x);
	gettimeofday(&t0, NULL);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf(" Element found at postion %d\n",i+1);
			j++;
			break;
		}
	}
	gettimeofday(&t1, NULL);
	elapsed = timedifference_msec(t0, t1);
  printf("\nCode executed in %f milliseconds.\n", elapsed);
  	
	if(j==0)
	{
		printf("Element not found\n");
	}
}
