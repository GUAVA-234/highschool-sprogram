#include<stdio.h>
	int arr[10]={}; //{40,90,80,30,70,20,60,10,50,45};
	int LEN = 10;
	int i,l,k,j,temp;
	int main()
	{	
	    printf("請輸入10個數字");
		for(int p=0;p<10;p++){
		scanf("%d",&arr[p]);
	}
	for(k=0;k<LEN;k++) printf("    %d",arr[k]);
	printf("\n");
		for(i=0;i<LEN;i++)
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
