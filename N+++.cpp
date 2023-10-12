#include<stdio.h>
int n,i;
int l=0;
int main(){
	printf("N=1+2+3+.....N\n");
	printf("N=");
	scanf("%d",&n);
	//printf("\n");
	for (int i=1;i<n+1;i++){
	printf("N %d = " ,i);
		
	for(int o=1;o<i+1;o++){			                     
		if(o==1)printf("%d ",o); 
		else if(o!=1) printf("+ %d ",o);
		l++;
		}
		printf("= %d " ,l);
		printf("\n");
		}
		  
		 
	return 0; 
}