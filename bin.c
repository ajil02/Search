/*Program to perform binary search*/
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
   	long int x;
	int arr[n],i,j=0,temp;
	
	
	for(i=0;i<n;i++)
	{
		
		printf("%d\t",arr[i]=rand()%100);
	}
	for(i=0;i<n-1;i++)
	{

		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nElements in sorted format:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}


	printf("\n Enter value to be searched:");
	scanf("%ld",&x);
	int low=0,high=n-1,mid;
	mid=(low+high)/2;
	gettimeofday(&t0, NULL);
	while (low<=high)
				{
					if(arr[mid]<x)
					{
						low=mid+1;
					}	
					else if (arr[mid]==x) 
					{
						printf("Element found at position %d\n",mid+1);
						break;
					}
					
					else
					{
						high=mid-1;
					}	
						mid=(low+high)/2;
					

					if(low>high)
						printf("%ld not present\n",x);
				
			}
	gettimeofday(&t1, NULL);
	elapsed = timedifference_msec(t0, t1);
  	printf("\nCode executed in %f milliseconds.\n", elapsed);
  	
}



