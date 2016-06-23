#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, N, i;
	
	while(scanf("%d %d %d", &a, &b, &N)!=-1){
	//	printf("OK! \n");
		
		for(i=0; i<=N; i++){
			if(i==0)
			printf("%d.", a/b);
			else{
				a = (a%b)*10;   // ¾l¼Æa%b 
				printf("%d", a/b);
			}

		}	
		puts("");
	}
//	printf("Error\n");
	
	return 0;
}

