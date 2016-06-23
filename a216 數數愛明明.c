#include<stdio.h>
#include<stdlib.h>
// sum(f(n)) = sigma(k) = n*(n+1)/2
/*ªk1¡G 
long long int f(long long int n){    
	if(n>1){
		return f(n-1)+n;
		n--;	
	}
	else if(n==1)
		return 1;
}
*/
long long int f(long long int n){

	return n*(n+1)/2;

}
// sum(g(n)) = sigma(f(n)) = sigma(n*(n+1)/2) = n*(n+1)*(n+2)/6 
/*ªk1: 
long long int g(long long int n){  
	if(n>1){
		return f(n)+g(n-1);
		n--;	
	}
	else if(n==1)
		return 1;
}
*/
long long int g(long long int n){ 

	return n*(n+1)*(n+2)/6;
}
 
int main()
{
	long long int n;
	while(scanf("%lld", &n)!=EOF){
		
		printf("%lld %lld\n", f(n), g(n));
		
	}

	return 0;
}

