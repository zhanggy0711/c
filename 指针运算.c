#include<stdio.h>

int main(void)
{
	char ac[]={0,2,2,3,4,5,6,7,8,9,};
	char *p=ac;
	printf("char:p =%p\n",p);
	printf("char:p+1=%p\n",p+1);
	printf("char:*p+1=%d\n",*p+1);
	
	int ai[]={0,3,2,3,4,5,6,7,8,9,};
	int *q=ai;
	printf("int:q=%p\n",q);
	printf("int:q+1=%p\n",q+1);
	printf("int:*q+1=%d\n",*q+1);
	
	double ad[]={0,4,2,3,4,5,6,7,8,9,};//nihaoa
	double *r=ad;
	printf("double:r=%p\n",r);
	printf("double:r+1=%p\n",r+1);
	printf("double:*r+1=%d\n",*r+1);
	
	long ae[]={0,5,2,3,4,5,6,7,8,9,};
	long *s=ae;
	printf("long:s=%p\n",s);
	printf("long:s+1=%p\n",s+1);
	printf("long:*s+1=%d\n",*s+1);
	
	short af[]={0,6,2,3,4,5,6,7,8,9,};
	short *t=af;
	printf("short:t=%p\n",t);
	printf("short:t+1=%p\n",t+1);
	printf("short:*t+1=%d\n",*t+1);
	
	return 0;
 } 
