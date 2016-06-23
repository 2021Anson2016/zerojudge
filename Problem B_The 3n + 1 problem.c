#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

int main()
{
	int i, j, k, n, CyLength=0;
	int MaxCylength = 0; 
	//All integers will be less than 1,000,000 and greater than 0.
	while(scanf("%d%d", &i, &j)!=-1){
		if ( i > j ) 
			swap(i, j);
		if(i>0 && j>0 && i<=1000000 && j<=1000000){
			for(k=i; k<=j; k++){
				n=k;
				if(n==1)
					continue;
		//		while(scanf("%d", &n)!=-1){
					CyLength++;
					while(n!=1){
						if(n%2!=0){ // n is odd
							n=3*n+1;
						}
						else if(n%2==0){
							n=n>>1;   //n=n/2;
						}	
						CyLength++;
					}
					if(CyLength>MaxCylength){
						MaxCylength = CyLength;
					}
		//		}
						CyLength = 0;
			}
			printf("%d %d %d\n", i, j, MaxCylength);			
		}
			MaxCylength = 0;
	}
		return 0;
}

