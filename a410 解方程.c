#include<stdio.h>
#include<stdlib.h>
/* �ѤG���@����{���{�� 
	ax+by=c
	dx+ey=f
*/
int main()
{
	int a,b,c,d,e,f;
	double x,y;
	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	// �ߤ@�ѡG 
	if((a*e-b*d)!=0){
		x = (double)(c*e-b*f)/(a*e-b*d);
		y = (double)(a*f-c*d)/(a*e-b*d); 
		printf("x=%.2f\ny=%.2f", x, y);
	}
	//�L���h�ոѡGdelta = delta_x = delta_y = 0 
	else if((a*e-b*d)==0 && (c*e-b*f)==0 && (a*f-c*d)==0){ 
		printf("Too many");
	}
	// �L�ѡGdelta = 0, delta_x != 0 ,  delta_y != 0 
	else{    
		printf("No answer");
	}
	return 0;
}

