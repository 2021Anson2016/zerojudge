#include<stdio.h>
#include<stdlib.h>

int main()
{
	int N, M; //N�ӥǤH�AM�����U 
	while(scanf("%d%d",&N, &M)!=-1){
		if(M==N)
			printf("%d\n", M);
		else
			printf("%d\n", M+1);
	}

	return 0;
}

