#include<stdio.h>
void main()
{
	int c;
	float a,b,s,d,p,q;
	printf("CALCULATOR\n");
	printf("**********\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Mltiplicatiion\n");
	printf("4. Division\n");
	printf("\n");
	printf("Enter your choice: ");
	scanf("%d",&c);
	printf("Enter the two numbers: ");
	scanf("%f%f",&a,&b);
	switch(c)
	{
		case 1:
			s=a+b;
			printf("%f + %f = %f",a,b,s);
			break;
		case 2:
			d=a-b;
			printf("%f - %f = %f",a,b,d);
			break;
		case 3:
			p=a*b;
			printf("%f x %f = %f",a,b,p);
			break;
		case 4:
			q=a/b;
			printf("%f / %f = %f",a,b,q);
			break;			
	}
	printf("\n");
}	
