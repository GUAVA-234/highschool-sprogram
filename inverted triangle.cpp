#include <stdio.h>

int main(){
for(int i=0;i<=4;i++){
		for(int j=0;j<=i;j++){
			printf(" ");
		}
		for(int a=0;a<9-i*2;a++){
		  printf("*");
		}
		printf("\n");
}
	
	return 0;
}
