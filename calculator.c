#include<stdio.h>
void main()
{
	int c;
	float a,b,r;
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
			r=a+b;
			printf("%f + %f = %f",a,b,r);
			break;
		case 2:
			r=a-b;
			printf("%f - %f = %f",a,b,r);
			break;
		case 3:
			r=a*b;
			printf("%f x %f = %f",a,b,r);
			break;
		case 4:
			r=a/b;
			printf("%f / %f = %f",a,b,r);
			break;
                default:
                        printf("Invalid choice!!!");			
	}
	printf("\n");
}	
