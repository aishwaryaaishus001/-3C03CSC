#include<stdio.h>
void main()
{
  int n,i,sum=0,count=0;
  printf("Enter a five digit number: ");
  scanf("%d",&n);
  while(n!=0)
  {
    i=n%10;
    count=count+1;
    sum=sum+i;
    n=n/10;
  }
  if(count==5)
  {
    printf("SUM = %d\n\n",sum);
  }
  else
  {
    printf("Enter a valid five digit number!!!\n\n");
  }
}
