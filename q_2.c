#include<stdio.h>
int main()
{
  int i,j, space=0;
  for(i=1;i<=5;i++)
  {
  	for(j=5;j>=space;j--)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	for(j=i-1;j>=1;j--)
	{
		printf("%d",j);
	}
	printf("\n");
	space++;
  }
return 0;
}
