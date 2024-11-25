#include <stdio.h>
int main()
{
	int a, sum;
	printf ("moi nhap n:");
	scanf ("%d",&a); 
	for (int i=0;i<=a;i++)
	{
	 sum = sum + i;
	 printf ("tong lan thu %d là :%d\n",i,sum);	
	} 
	return 0; 
 } 
