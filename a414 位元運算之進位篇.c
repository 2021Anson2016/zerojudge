#include<stdio.h>
#include<stdlib.h>
//�@�ӼƦb�q���̻��W�ɻݭn�i��X���C//


int main()
{
	int n, i, cnt = 0;
	int bit[32];   //��ƪ��צ�32�줸
	 
	for(i=0; i<32; i++){
		bit[i]=1;
	}
	while(scanf("%d", &n)!= EOF){ 
		if(n==0)
	 		break;
		for(i=0; i<32; i++){
			
	//		printf("%d ", bit[i]);
	//		printf("%d ", 1<<i);   // ����(�k��) = *2��(��2��)
	/* 	for(i=31; i>=0; i--){
	//		printf("%d ", (n>>i)&bit[i]); } */     //��2�i��
			if(((n>>i)&bit[i])==1){ 
				cnt++;
			}
			else
				break; 
		}
			printf("%d\n", cnt);
			cnt = 0;
  }
	return 0;
}

