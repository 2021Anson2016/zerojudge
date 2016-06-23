#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M; //N­Ó¥Ç¤H¡AM³»¬õ´U 
	while(scanf("%d%d",&N, &M)!=-1){
		if(M==N)
			printf("%d\n", M);
		else
			printf("%d\n", M+1);
	}

	return 0;
}

