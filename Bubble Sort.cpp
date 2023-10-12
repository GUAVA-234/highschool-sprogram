#include<stdio.h>
	int arr[10]=  {90,40,80,30,70,20,60,10,50,45};
	int LEN = 10;
	int main()
	{
		int i,j,k,l,temp;
		for(k=0;k<LEN;k++) printf("    %d",arr[k]);
		printf ("\n");
		for(i=0;i<LEN-1;i++)
		{
			l=i;
			for(j=i+1;j<LEN;j++)
			{
				if (arr[l]<arr[j])
				{
					l=j;
				}
			}
				temp=arr[i];
				arr[i]=arr[l];
				arr[l]=temp;
				
			for(k=0;k<LEN;k++)
			{
				printf("    %d",arr[k]);
			}
			printf("\n");
		}
		return 0;
	}
