#include<stdio.h>
#include <stdlib.h>
#include <time.h>

	int LEN = 20;
	int main()
	{
	int i,j,k,l,temp;
	int arr[20];
   	 srand((unsigned) time(NULL) );
	for(i=0;i<20;i++){
    arr[i]=(99 * rand() / RAND_MAX + 1);
    printf(" %d ",arr[i]);
	}
    printf("\n");
    
		for(i=0;i<LEN-1;i++)
		{
			l=i;
			for(j=i+1;j<LEN;j++)
			{
				if (arr[l]>arr[j])
				{
					l=j;
				}
			}
				temp=arr[i];
				arr[i]=arr[l];
				arr[l]=temp;
			for(k=0;k<LEN;k++)
			{
				if(k==l)
				printf("  [%d]",arr[k]);
				else if(k==i)
				printf("  [%d]",arr[k]);
				else
				printf("    %d",arr[k]);
				
			}
			printf("\n");
		}
		return 0;
	}
