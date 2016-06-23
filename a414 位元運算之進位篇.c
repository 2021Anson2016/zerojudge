#include<stdio.h>
#include<stdlib.h>
//一個數在電腦裡遞增時需要進位幾次。//


int main()
{
	int n, i, cnt = 0;
	int bit[32];   //整數長度有32位元
	 
	for(i=0; i<32; i++){
		bit[i]=1;
	}
	while(scanf("%d", &n)!= EOF){ 
		if(n==0)
	 		break;
		for(i=0; i<32; i++){
			
	//		printf("%d ", bit[i]);
	//		printf("%d ", 1<<i);   // 左移(右移) = *2倍(除2倍)
	/* 	for(i=31; i>=0; i--){
	//		printf("%d ", (n>>i)&bit[i]); } */     //轉2進位
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

