#include<stdio.h>
#include<math.h>

int main()
{
	float p=0,a,n,f,t,r;
	printf("ana parayi girin");
	scanf("%f",&a);
	printf("donem girin");
	scanf("%f",&n);
	printf("faiz girin");
	scanf("%f",&r);
	//p=a*(r/100)/(1-pow(1+r/100,-n));
	p=a*(r/100)/(1-pow((1+r/100),-n));
    printf("%f\n",p);
	return 0;
}










